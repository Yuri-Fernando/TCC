//Conexão wifi, página Html e comunicação serial entre nodemcu e arm tm4c
#include <ESP8266WiFi.h>
#include <WebSocketsServer.h>
#include <ESP8266WebServer.h>

const char* ssid = "Laetare";
const char* password = "fernandosistek";
int RELAY1 = 13;
int websokMillis=50;

ESP8266WebServer server(80);
WebSocketsServer webSocket = WebSocketsServer(88);
String webSite, JSONtxt;
boolean RELAYonoff = true;

const char webSiteCont[] PROGMEM =
R"aaa(
<!DOCTYPE HTML>
<html>
<head>
<META name='viewport' content='width=device-width, initial-scale=1'>
<script>
InitWebSocket()
function InitWebSocket()
{
websock = new WebSocket('ws://'+window.location.hostname+':88/');
websock.onmessage=function(evt)
{
JSONobj = JSON.parse(evt.data);
document.getElementById('btn').innerHTML = JSONobj.RELAYonoff;
if(JSONobj.RELAYonoff == 'ON')
{
document.getElementById('btn').style.background='#FFA200';
document.getElementById('btn').style["boxShadow"] = "0px 0px 0px 8px #FFA200";
}
else
{
document.getElementById('btn').style.background='#111111';
document.getElementById('btn').style["boxShadow"] = "0px 0px 0px 8px #111111";
}
} // end of onmessage
} // end of InitWebSocket
function button(){
btn = 'RELAYonoff=ON';
if(document.getElementById('btn').innerHTML === 'ON')
{
btn = 'RELAYonoff=OFF';
}
websock.send(btn);
}
</script>
<style>
#btn{
display: inline-block;
text-decoration:none;
background: #8cd460;
color: rgba(255,255,255,0.80);
font-weight:bold;
font: 100px arial, sans-serif;
width: 320px;
height: 320px;
line-height: 320px;
border-radius: 50%;
margin:30%;
margin-top:60px;
text-align: center;
vertical-align: middle;
overflow: hidden;
box-shadow: 0px 0px 0px 8px #8cd460;
border: solid 2px rgba(255,255,255, 0.47);
transition: 0.4s;
}
</style>
</head>
<body>
<a href="#" id="btn" ONCLICK='button()'> </a>
</body>
</html>
)aaa";
void WebSite(){
server.send(200, "text/html", webSiteCont);
}
void webSocketEvent(uint8_t num, WStype_t type, uint8_t * payload, size_t length)
{
String payloadString = (const char *)payload;
Serial.print("payloadString= ");
Serial.println(payloadString);
if(type == WStype_TEXT) // receive text from client
{
byte separator=payloadString.indexOf('=');
String var = payloadString.substring(0,separator);
Serial.print("var= ");
Serial.println(var);
String val = payloadString.substring(separator+1);
Serial.print("val =");
Serial.println(val);
Serial.println(" ");
if(var = "RELAYonoff")
{
RELAYonoff = false;
if(val=="ON")RELAYonoff = true;
}
}
}


void setup() {
Serial.begin(9600);
pinMode(RELAY1,OUTPUT);
WiFi.begin(ssid,password);
while(WiFi.status() !=WL_CONNECTED)
{
Serial.println(".");
delay(500);
}
//WiFi.mode(WIFI_STA);
Serial.println(" Start ESP ");
Serial.println(WiFi.localIP());
server.on("/",WebSite);
server.begin();
webSocket.begin();
webSocket.onEvent(webSocketEvent);
}


void loop() {
webSocket.loop();
server.handleClient();
if(RELAYonoff == true)
{
Serial.println("a");
}
else
{
Serial.println("b");
}
String RELAYswitch = "OFF";
if(RELAYonoff == true) RELAYswitch = "ON";
JSONtxt = "{\"RELAYonoff\":\""+RELAYswitch+"\"}";
webSocket.broadcastTXT(JSONtxt);
}
