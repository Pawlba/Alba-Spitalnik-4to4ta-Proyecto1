// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  
  for (int x = 0; x <= 255; x++){
    analogWrite(11, x);
    	delay(100);
    for (int z = 0; z <= 255; z++){
      analogWrite(10, z);
     	delay(100);
        for (int y = 0; y <= 255; y++){
        	analogWrite(9, y);
          		delay(100);
      }
    }
  }
}