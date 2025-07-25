/*Piezo sensor with Arduino.
  Serial monitor readings.
  created by the SriTu Tech team.
  Read the code below and use it for any of your creation
*/
void setup() {
  Serial.begin(9600);//enable serial monitor
  for (byte a = 2; a <= 6; a++) {
    pinMode(a, OUTPUT);
  }
}

void loop() {
  int value = analogRead(A0);//read analog value and put in to the variable
  Serial.println(value);//print serial monitor
 
  for (int a = 1; a <= 5; a++) {
    if (value > a * 2) {
      digitalWrite(a + 1, HIGH);
    } else {
      digitalWrite(a + 1, LOW);
    }
  }
}