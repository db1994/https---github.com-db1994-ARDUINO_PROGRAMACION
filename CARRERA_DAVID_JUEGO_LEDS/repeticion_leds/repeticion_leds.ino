int led_1=4;
int led_2=5;
int led_3=6;
int led_4=7;
int led_5=8;
int led_6=9;
int led_7=10;
int led_8=11;
int led_9=12;
int led_10=13;
int sw_1=3;
int sw_2=2;
int sw_3=1;
int pulsador=9;
int contador=0;
int leds [10]={led_1,led_2,led_3,led_4,led_5,led_6,led_7,led_8,led_9,led_10};
int k=0;
void setup() {
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  pinMode(led_4,OUTPUT);
  pinMode(led_5,OUTPUT);
  pinMode(led_6,OUTPUT);
  pinMode(led_7,OUTPUT);
  pinMode(led_8,OUTPUT);
  pinMode(led_9,OUTPUT);
  pinMode(led_10,OUTPUT);
  pinMode(sw_1,INPUT);
  pinMode(sw_2,INPUT);
  pinMode(sw_3,INPUT);
  pinMode(pulsador,INPUT);

}

void loop() {
  if(digitalRead(sw_1)==HIGH&&digitalRead(sw_2)==HIGH&&digitalRead(sw_3)==HIGH)
  {if(k<5){
      for(;contador<10;contador++){
     digitalWrite(leds[contador],HIGH);
    delay(200);
    digitalWrite(leds[contador+1],HIGH);
    delay(200);
 digitalWrite(leds[contador],HIGH);
    delay(200); }
  k++;}
    contador=0; }

}
