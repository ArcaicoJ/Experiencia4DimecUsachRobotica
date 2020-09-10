// se comenta el codigo 

void setup()
{
  //declaracion de outputs
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(13,OUTPUT);
}

void CambiaLed(){
  digitalWrite(13,!digitalRead(13));
}

void loop()
{
  //cicloo
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  delay(500); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  CambiaLed();
}
