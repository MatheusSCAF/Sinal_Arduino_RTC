//Incusão bibliotecas
#include <Wire.h>
#include "RTClib.h" 
//Inclusão Variáveis
<<<<<<< HEAD

int rele = 11;
int inter = 9;
int val = 0;
int verd = 6;



=======
int rele = 11;
int inter = A0;
>>>>>>> 59dbeac715d6161341187d6a8bbe69ef71752066
 
RTC_DS3231 rtc; //OBJETO DO TIPO RTC_DS3231
 
//DECLARAÇÃO DOS DIAS DA SEMANA
char daysOfTheWeek[7][12] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
 
void setup(){
<<<<<<< HEAD

   pinMode(verd, OUTPUT);

  
=======
>>>>>>> 59dbeac715d6161341187d6a8bbe69ef71752066
  pinMode(inter,INPUT);
  pinMode(rele,OUTPUT);
  
  Serial.begin(9600); //INICIALIZA A SERIAL
  if(! rtc.begin()) { // SE O RTC NÃO FOR INICIALIZADO, FAZ
    Serial.println("DS3231 não encontrado"); //IMPRIME O TEXTO NO MONITOR SERIAL
    while(1); //SEMPRE ENTRE NO LOOP
  }
  //if(rtc.lostPower()){ //SE RTC FOI LIGADO PELA PRIMEIRA VEZ / FICOU SEM ENERGIA / ESGOTOU A BATERIA, FAZ
    Serial.println("DS3231 OK!"); //IMPRIME O TEXTO NO MONITOR SERIAL
    //REMOVA O COMENTÁRIO DE UMA DAS LINHAS ABAIXO PARA INSERIR AS INFORMAÇÕES ATUALIZADAS EM SEU RTC
    //rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); //CAPTURA A DATA E HORA EM QUE O SKETCH É COMPILADO
    //rtc.adjust(DateTime(2020, 2, 2, 10, 31, 0)); //(ANO), (MÊS), (DIA), (HORA), (MINUTOS), (SEGUNDOS) Para ajustar o primeiro horário retire as barras no inicio do codigo desta linha e ajuste de acordo com as indicações
  //}
  delay(100); //INTERVALO DE 100 MILISSEGUNDOS
}

void loop () {
<<<<<<< HEAD
  
  val = digitalRead(inter);
  Serial.println(val);
  
=======
 int result = digitalRead(inter);
 
>>>>>>> 59dbeac715d6161341187d6a8bbe69ef71752066
    DateTime now = rtc.now(); //CHAMADA DE FUNÇÃO
    Serial.print("Data: "); //IMPRIME O TEXTO NO MONITOR SERIAL
    Serial.print(now.day(), DEC); //IMPRIME NO MONITOR SERIAL O DIA
    Serial.print('/'); //IMPRIME O CARACTERE NO MONITOR SERIAL
    Serial.print(now.month(), DEC); //IMPRIME NO MONITOR SERIAL O MÊS
    Serial.print('/'); //IMPRIME O CARACTERE NO MONITOR SERIAL
    Serial.print(now.year(), DEC); //IMPRIME NO MONITOR SERIAL O ANO
    Serial.print(" / Dia: "); //IMPRIME O TEXTO NA SERIAL
    Serial.print(daysOfTheWeek[now.dayOfTheWeek()]); //IMPRIME NO MONITOR SERIAL O DIA
    Serial.print(" / Horas: "); //IMPRIME O TEXTO NA SERIAL
    Serial.print(now.hour(), DEC); //IMPRIME NO MONITOR SERIAL A HORA
    Serial.print(':'); //IMPRIME O CARACTERE NO MONITOR SERIAL
    Serial.print(now.minute(), DEC); //IMPRIME NO MONITOR SERIAL OS MINUTOS
    Serial.print(':'); //IMPRIME O CARACTERE NO MONITOR SERIAL
    Serial.print(now.second(), DEC); //IMPRIME NO MONITOR SERIAL OS SEGUNDOS
    Serial.println(); //QUEBRA DE LINHA NA SERIAL
    delay(1000); //INTERVALO DE 1 SEGUNDO
<<<<<<< HEAD
  
    if(val == 1){
  digitalWrite(verd, HIGH);
  if(now.hour() == 7 && now.minute()== 26 && now.second()== 0  || now.hour() == 7 && now.minute()== 30&& now.second()== 0  || now.hour() == 8 && now.minute()== 20&& now.second()== 0  || now.hour() == 9 && now.minute()== 10&& now.second()== 0  || now.hour() == 10&& now.minute() == 0 && now.second()== 0  || now.hour() == 10 && now.minute()== 20 && now.second()== 0 || now.hour() == 11 && now.minute()== 10 && now.second()== 0  || now.hour() == 12 && now.minute() == 0 && now.second()== 0  || now.hour() == 13&& now.minute() == 0&& now.second()== 0  || now.hour() == 13 && now.minute()== 10&& now.second()== 0  || now.hour() == 13 && now.minute()== 20&& now.second()== 0  || now.hour() == 14 && now.minute()== 10&& now.second()== 0  || now.hour() == 15&& now.minute() == 0 && now.second()== 0  || now.hour() == 15 && now.minute()== 20&& now.second()== 0  || now.hour() == 16 && now.minute()== 10&& now.second()== 0  || now.hour() == 17 && now.minute() == 0 && now.second()== 0 )//Declaração Horários Usados
=======
    Serial.println(inter);
    if(result == 0)//Horário Normal
    {
      if(now.hour() == 7 && now.minute()== 25 && now.second()== 0  || now.hour() == 7 && now.minute()== 30&& now.second()== 0  || now.hour() == 8 && now.minute()== 20&& now.second()== 0  || now.hour() == 9 && now.minute()== 10&& now.second()== 0  || now.hour() == 10&& now.second()== 0  || now.hour() == 10 && now.minute()== 20&& now.second()== 0 || now.hour() == 11 && now.minute()== 10 && now.second()== 0  || now.hour() == 12 && now.minute() == 0 && now.second()== 0  || now.hour() == 13&& now.minute() == 0&& now.second()== 0  || now.hour() == 13 && now.minute()== 10&& now.second()== 0  || now.hour() == 13 && now.minute()== 20&& now.second()== 0  || now.hour() == 14 && now.minute()== 10&& now.second()== 0  || now.hour() == 15&& now.minute() == 0 && now.second()== 0  || now.hour() == 15 && now.minute()== 20&& now.second()== 0  || now.hour() == 16 && now.minute()== 10&& now.second()== 0  || now.hour() == 17 && now.minute() == 0 && now.second()== 0 )//Declaração Horários Usados
    {
      digitalWrite(rele, HIGH);
  
    }
     if(now.hour() == 7 && now.minute()== 25 && now.second()== 15  || now.hour() == 7 && now.minute()== 30 && now.second()== 15 || now.hour() == 8 && now.minute()== 20 && now.second()== 15 || now.hour() == 9 && now.minute()== 10 && now.second()== 15 || now.hour() == 10 && now.second()== 15 || now.hour() == 10 && now.minute()== 20 && now.second()== 15 || now.hour() == 11 && now.minute()== 10 && now.second()== 15 || now.hour() == 12&& now.minute() == 0 && now.second()== 15 || now.hour() == 13&& now.minute() == 0 && now.second()== 15 || now.hour() == 13 && now.minute()== 10 && now.second()== 15 || now.hour() == 13 && now.minute()== 20 && now.second()== 15 || now.hour() == 14 && now.minute()== 10 && now.second()== 15 || now.hour() == 15 && now.minute() == 0 && now.second()== 15 || now.hour() == 15 && now.minute()== 20 && now.second()== 15 || now.hour() == 16 && now.minute()== 10 && now.second()== 15 || now.hour() == 17 && now.minute() == 0 && now.second()== 15)//Declaração Horários Usados
    {
      digitalWrite(rele, LOW);

    }
    }
    else if(result == 1)//Horário Reduzido
    {

      if(now.hour() == 7 && now.minute()== 25 && now.second()== 0  || now.hour() == 7 && now.minute()== 30&& now.second()== 0  || now.hour() == 8 && now.minute()== 20 && now.second() == 0  || now.hour() == 9 && now.minute()== 10&& now.second()== 0  || now.hour() == 10&& now.second()== 0  || now.hour() == 10 && now.minute()== 20&& now.second()== 0 || now.hour() == 11 && now.minute()== 10 && now.second()== 0  || now.hour() == 12 && now.minute() == 0 && now.second()== 0  || now.hour() == 13&& now.minute() == 0&& now.second()== 0  || now.hour() == 13 && now.minute()== 10&& now.second()== 0  || now.hour() == 13 && now.minute()== 20&& now.second()== 0  || now.hour() == 14 && now.minute()== 10&& now.second()== 0  || now.hour() == 15&& now.minute() == 0 && now.second()== 0  || now.hour() == 15 && now.minute()== 20&& now.second()== 0  || now.hour() == 16 && now.minute()== 10&& now.second()== 0  || now.hour() == 17 && now.minute() == 0 && now.second()== 0 )//Declaração Horários Usados
>>>>>>> 59dbeac715d6161341187d6a8bbe69ef71752066
    {
      digitalWrite(rele, HIGH);
  
    }
  if(now.hour() == 7 && now.minute()== 26 && now.second()== 15  || now.hour() == 7 && now.minute()== 30 && now.second()== 15 || now.hour() == 8 && now.minute()== 20 && now.second()== 15 || now.hour() == 9 && now.minute()== 10 && now.second()== 15 || now.hour() == 10 && now.minute() == 0 && now.second()== 15 || now.hour() == 10 && now.minute()== 20 && now.second()== 15 || now.hour() == 11 && now.minute()== 10 && now.second()== 15 || now.hour() == 12&& now.minute() == 0 && now.second()== 15 || now.hour() == 13&& now.minute() == 0 && now.second()== 15 || now.hour() == 13 && now.minute()== 10 && now.second()== 15 || now.hour() == 13 && now.minute()== 20 && now.second()== 15 || now.hour() == 14 && now.minute()== 10 && now.second()== 15 || now.hour() == 15 && now.minute() == 0 && now.second()== 15 || now.hour() == 15 && now.minute()== 20 && now.second()== 15 || now.hour() == 16 && now.minute()== 10 && now.second()== 15 || now.hour() == 17 && now.minute() == 0 && now.second()== 15)//Declaração Horários Usados
    {
      digitalWrite(rele, LOW);

    }
<<<<<<< HEAD
  }
  else if (val == 0){
  digitalWrite(verd, LOW);
}
    if(now.hour() == 7 && now.minute()== 25 && now.second()== 0  || now.hour() == 7 && now.minute()== 30&& now.second()== 0  || now.hour() == 8 && now.minute()== 20&& now.second()== 0  || now.hour() == 9 && now.minute()== 10&& now.second()== 0  || now.hour() == 10&& now.minute() == 0 && now.second()== 0  || now.hour() == 10 && now.minute()== 20 && now.second()== 0 || now.hour() == 11 && now.minute()== 10 && now.second()== 0  || now.hour() == 12 && now.minute() == 0 && now.second()== 0  || now.hour() == 13&& now.minute() == 0&& now.second()== 0  || now.hour() == 13 && now.minute()== 10&& now.second()== 0  || now.hour() == 13 && now.minute()== 20&& now.second()== 0  || now.hour() == 14 && now.minute()== 10&& now.second()== 0  || now.hour() == 15&& now.minute() == 0 && now.second()== 0  || now.hour() == 15 && now.minute()== 20&& now.second()== 0  || now.hour() == 16 && now.minute()== 10&& now.second()== 0  || now.hour() == 17 && now.minute() == 0 && now.second()== 0 )//Declaração Horários Usados
    {
      digitalWrite(rele, HIGH);
  
    }
     if(now.hour() == 7 && now.minute()== 25 && now.second()== 15  || now.hour() == 7 && now.minute()== 30 && now.second()== 15 || now.hour() == 8 && now.minute()== 20 && now.second()== 15 || now.hour() == 9 && now.minute()== 10 && now.second()== 15 || now.hour() == 10 && now.minute() == 0 && now.second()== 15 || now.hour() == 10 && now.minute()== 20 && now.second()== 15 || now.hour() == 11 && now.minute()== 10 && now.second()== 15 || now.hour() == 12&& now.minute() == 0 && now.second()== 15 || now.hour() == 13&& now.minute() == 0 && now.second()== 15 || now.hour() == 13 && now.minute()== 10 && now.second()== 15 || now.hour() == 13 && now.minute()== 20 && now.second()== 15 || now.hour() == 14 && now.minute()== 10 && now.second()== 15 || now.hour() == 15 && now.minute() == 0 && now.second()== 15 || now.hour() == 15 && now.minute()== 20 && now.second()== 15 || now.hour() == 16 && now.minute()== 10 && now.second()== 15 || now.hour() == 17 && now.minute() == 0 && now.second()== 15)//Declaração Horários Usados
    {
      digitalWrite(rele, LOW);

    }
  
  

=======
    }
    
   
   
   
>>>>>>> 59dbeac715d6161341187d6a8bbe69ef71752066
   
}
