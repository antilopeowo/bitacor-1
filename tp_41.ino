bool val=LOW;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  val=digitalRead(6);
  if(val==HIGH){
    digitalWrite(2, HIGH);
    digitalWrite(7,LOW);
  }
    else{
      digitalWrite(2,LOW);
   digitalWrite(7, HIGH);  
}
}
