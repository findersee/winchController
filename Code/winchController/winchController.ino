#define limits 3
#define button 2
#define Led 13

#define up 10
#define down 9

volatile byte state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(limits,INPUT);
  pinMode(button,INPUT_PULLUP);

  pinMode(up,OUTPUT);
  pinMode(down,OUTPUT);
  pinMode(Led,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(limits),limit,FALLING);
  attachInterrupt(digitalPinToInterrupt(button),buttonRead,FALLING);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(bitRead(state,0)){
    digitalWrite(Led,HIGH);
    if(bitRead(state,1)){
      digitalWrite(up,HIGH);
    }
    else{
      digitalWrite(down,HIGH);
    }
  }
  if(not(bitRead(state,0)) || not digitalRead(limits)){
    digitalWrite(down,LOW);
    digitalWrite(up,LOW);
    digitalWrite(Led,LOW);
  }
  
  delay(100);
}

void limit(){

  bitWrite(state,0,0);
  
}

void buttonRead(){

    bitWrite(state,0,1);
    state = state ^ 2;

}
