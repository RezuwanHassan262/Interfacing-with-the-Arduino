// C++ code
//
int l = 0;
int lv = 0;
int light_intesity = 800;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  lv = analogRead(l);
  Serial.println(lv);
  delay(50);
  
  if (lv < light_intesity){
    digitalWrite(13, HIGH);
  }
  else{
  digitalWrite(13, LOW);
  }
}