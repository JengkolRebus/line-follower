int s1 = 0;
int s2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  analogWrite(3, 90);
  analogWrite(11, 80);

}

void loop() {
  // put your main code here, to run repeatedly:
  s1 = digitalRead(7);
  s2 = digitalRead(8);
  
  if(s1 == 0 && s2 == 0){
    maju();
  }
  if(s1 == 0 && s2 == 1){
    bKiri();
  }
  if(s1 == 1 && s2 == 0){
    bKanan();
  }
  /*
  if(s1 == 1 && s2 == 1){
    Stop();
  }
  */
}
