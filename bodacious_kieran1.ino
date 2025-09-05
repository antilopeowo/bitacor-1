void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  for (int x=0; x<=255; x++){
 	analogWrite(3, x);
    delay(10);
  	for (int y=0; y<=255; y++){
    	analogWrite(5, y);
        delay(10);
    	for (int z=0; z<=255; z++){
        	analogWrite(6, z);
          	delay(10);
   }   
}
  }
}