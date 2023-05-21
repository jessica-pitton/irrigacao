#define rele 3
#define sensor 2
bool irrigar = false;

void setup()
{
  // Configurar os pinos como saída ou entrada
  pinMode(rele, OUTPUT);
  pinMode(sensor, INPUT);
  
  // Desligar o relé inicialmente
  digitalWrite(rele, HIGH);
}

void loop()
{
  // Ler o estado do sensor
  irrigar = digitalRead(sensor);
  
  if (irrigar)
  {
    // Sensor detectou a necessidade de irrigação, ligar o relé
    digitalWrite(rele, LOW);
  }
  else
  {
    // Sensor não detectou a necessidade de irrigação, desligar o relé
    digitalWrite(rele, HIGH);
  }
  
  delay(500);
}







