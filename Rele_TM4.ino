//Teste de relé utilizando arm tm4c
#define sinalparaorele PB_3 //define a porta para o acionamento do rele
#define pinobotao PB_2 //Porta utilizada para o botão de acionamento
int leitura; //Armazena informações sobre a leitura do botão
int estadorele = 0; //Armazena o estado do relé (ligado/desligado)

void setup()
{
//Define o pino como saida (sinal para o rele)
pinMode(sinalparaorele, OUTPUT);
//Define o pino como entrada (Pino do botao)
pinMode(pinobotao, INPUT);
//digitalWrite(sinalparaorele, 0);
}
void loop()
{
leitura = digitalRead(pinobotao);
if (leitura != 1)
{
while(digitalRead(pinobotao) != 1)
{
delay(100);
}
// Inverte o estado
estadorele = !estadorele;
digitalWrite(sinalparaorele, estadorele);
}
}
