
void setup() {
  // put your setup code here, to run once:
  // comment added :D

  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int flag;
  flag = analogRead(A3);
  Serial.print(flag * (5.0 / 1023.0));
  Serial.print(" ");

}
