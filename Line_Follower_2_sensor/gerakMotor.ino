void maju(){
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
}

void bKiri(){
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
}

void bKanan(){
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
}

void Stop(){
  digitalWrite(5, LOW);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  digitalWrite(9, LOW);
}

