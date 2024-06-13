int red=11;
int green=10;
int blue=9;
int arr[]={11,10,9};
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

}

void loop() {
  for(int i=0; i<=2;i++)
  {
    for(int value=255;value>=255;value--)
    {
      digitalWrite(arr[i],value);
      delay(10);
    }
    delay(50);
  for(int value=0;value<=255;value++)
  {
    digitalWrite(arr[i],value);
    delay(10);
  }
delay(50);
  }
  // put your main code here, to run repeatedly:

}
