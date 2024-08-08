//Teste de Bluetooth utilizando arduino

#include <SoftwareSerial.h>
SoftwareSerial SerialBT(4, 5); // RX, TX

//Configuracoes biblioteca Blynk
#define BLYNK_PRINT SerialBT
#define BLYNK_USE_DIRECT_CONNECT
#include <BlynkSimpleSerialBLE.h>

//Token de autorizacao
char auth[] = "7b0f4572ea13250021348b42bca5e69f";
void setup()
{

//Inicializa a comunicacao serial com o modulo HC-05
SerialBT.begin(9600);
Blynk.begin(SerialBT, auth);
}
void loop()
{
//Aguarda conexao e interpreta os comandos enviados
Blynk.run();
}