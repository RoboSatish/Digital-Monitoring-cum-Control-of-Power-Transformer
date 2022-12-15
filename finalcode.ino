int s1,s2;
void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  s1=analogRead(A0);
  //s2=analogRead(A1);
  Serial.println(s1);
  delay(500);
  
  //Serial.println(s2);
}
