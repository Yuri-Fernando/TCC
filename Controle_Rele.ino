//Comunicação serial e controle do relé

#define led PE_5
String inputString;
bool stringComplete = false;
char c;

void setup()
{
Serial.begin(9600);
//Define a porta do led como saida
pinMode(led, OUTPUT);
}

void loop()
{
// print the string when a newline arrives:
if (stringComplete) {
Serial.println(inputString);
c = inputString[0];
// clear the string:
if (c == 'a') {
digitalWrite(led, HIGH);
Serial.println ('k');
}
if (c == 'b') {
//Apaga o led
digitalWrite(led, LOW);
Serial.println ('i');
}
inputString = "";
stringComplete = false;
}
}
void serialEvent() {
while (Serial.available()) {
// get the new byte:
char inChar = (char)Serial.read();
// add it to the inputString:
inputString += inChar;
// if the incoming character is a newline, set a flag so the main loop can
// do something about it:
if (inChar == '\n') {
stringComplete = true;
}
}
}
