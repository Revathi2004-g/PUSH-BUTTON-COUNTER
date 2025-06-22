#define LED 10
#define btn 2
int btn_state = 0;
int count = 0;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(btn, INPUT);
  Serial.begin(9600);
}

void loop()
{
  btn_state = digitalRead(btn);
  if(btn_state == HIGH)
  {
  	digitalWrite(LED, HIGH);
    count++;
    Serial.print("No:of time button presses : ");
    Serial.println(count);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
}
