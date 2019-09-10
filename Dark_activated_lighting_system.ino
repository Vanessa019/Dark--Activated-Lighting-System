
//Declare pin usage
int ledPin = 11;
int ldrPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <=300){
      digitalWrite(ledPin, HIGH);
      Serial.print("LDR IS DARK, LED IS ON");
      Serial.print('\n');
      }
  else{
      digitalWrite(ledPin, LOW);
      Serial.print("---------------");
      Serial.print('\n');
  }

}
