void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  digitalWrite(3,LOW);

  pinMode(4,OUTPUT);
  digitalWrite(4,LOW);

}
//da go zapoim; scl i sda kum arduinoto za danni
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(4,HIGH);
 delay(50);
 digitalWrite(4,LOW);
 delay(50); 
}
