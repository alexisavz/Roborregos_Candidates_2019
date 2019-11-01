#include <NewPing.h>

//Llantas
int const llanta1F=4;
int const llanta1B =5;
//Llanta delantera derecha
int const llanta2F=6;
int const llanta2B=7;
//Llanta trasera derecha
int const llanta3F=8;
int const llanta3B=9;
//Llanta del frente izquierda
int const llanta4B=10;
int const llanta4F=11;
//Llanta del frente izquierda

//Ultrasonicos
#define triggerF 53
#define echoF 52
#define triggerI 51
#define echoI 50
#define triggerD 13
#define echoD 12
#define MAX_DISTANCE 200

NewPing sonarD(triggerD,echoD,MAX_DISTANCE);
NewPing sonarI(triggerI, echoI, MAX_DISTANCE);
NewPing sonarF(triggerF, echoF, MAX_DISTANCE);

//De color
#define as0 30
#define as1 28
#define as2 24
#define as3 26
#define aso 22

#define bs0 31
#define bs1 29
#define bs2 25
#define bs3 23
#define bso 27
int aFrequency = 0;
int bFrequency = 0;

//LED
int red_pin= 37;
int green_pin = 38;
int blue_pin = 39;

void setup() {
  //Llantas
  pinMode(llanta1F, OUTPUT);
  pinMode(llanta1B, OUTPUT);
  pinMode(llanta2F, OUTPUT);
  pinMode(llanta2B, OUTPUT);
  pinMode(llanta3F, OUTPUT);
  pinMode(llanta3B, OUTPUT);
  pinMode(llanta4F, OUTPUT);
  pinMode(llanta4B, OUTPUT);

  pinMode(as0, OUTPUT);
  pinMode(as1, OUTPUT);
  pinMode(as2, OUTPUT);
  pinMode(as3, OUTPUT);
  pinMode(aso, INPUT);
  
  pinMode(bs0, OUTPUT);
  pinMode(bs1, OUTPUT);
  pinMode(bs2, OUTPUT);
  pinMode(bs3, OUTPUT);
  pinMode(bso, INPUT);

  digitalWrite(as0, HIGH);
  digitalWrite(as1, LOW);

  digitalWrite(bs0, HIGH);
  digitalWrite(bs1, LOW);

  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  
  Serial.begin(9600);
}


void loop(){
   
imprime_RGB();

  int r1=0;
  int g1=0;
  int b1=0;
  int r2=0;
  int g2=0;
  int b2=0;

  checa_color_frente(r1,g1,b1);
  checa_color_atras(r2,g2,b2);
    
  if(b1>40 && g1<60 && sonarI.ping_cm()<20 ){
    zona_A();
  }
  else if(b1<45 && g1>60){
    zona_D();
  }
  else if ((r1<30 && b1<30 && g1<30) && (r2<30 && g2<30 && b2<30)){
       zona_C();
  }
  else {
    zona_B(); 
  }
 
}
