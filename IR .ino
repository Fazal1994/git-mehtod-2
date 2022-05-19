const int pir = 2;
const int led = 3;
void setup()
{
  pinMode(pir, INPUT);//PIR
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  int sig = digitalRead(pir);
  Serial.println(sig);
  if (sig == 1)
  {
  digitalWrite(led, HIGH);
}
else
{
  digitalWrite(led, LOW);
  }
}
