int myvalue=0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}
 
void loop() {
  myvalue=random(myvalue-1);
  Serial.println(myvalue);
  delay(1000);
  // put your main code here, to run repeatedly:

}
