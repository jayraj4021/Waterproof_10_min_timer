int count = 0;

void setup() {
  // initialise digital pin 0,1, and 2 as output
  pinMode (0, OUTPUT);
  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);

  //set them low
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);

  //waiting for intial 2 mins
  delay(120000);
}

// put your main code here, to run repeatedly:
void loop() {
  //update LEDs every 60 secs
  delay(60000);
  count = count + 1;
  set_LEDs(count);
}

void set_LEDs(int count){
  if((count & 1) == 1){
    digitalWrite(0,HIGH);
  }else{
    digitalWrite(0,LOW);
  }

  if((count & 2) == 2){
    digitalWrite(1,HIGH);
  }else{
    digitalWrite(1,LOW);
  }

  if((count & 4) == 4){
    digitalWrite(2,HIGH);
  }else{
    digitalWrite(2,LOW);
  }
}

