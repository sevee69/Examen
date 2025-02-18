const int ledRojo = 9; // LED Rojo
const int ledVerde = 10; // LED Verde (para magenta)
const int ledAzul = 11; // LED Azul (para magenta y azul claro)
const int ledAmarillo = 6; // LED Amarillo
const int ledNaranja = 5; // LED Naranja
const int boton = 2; // Botón

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledNaranja, OUTPUT);
  pinMode(boton, INPUT_PULLUP); // Usamos resistencia pull-up interna
}

void loop() {
  if (digitalRead(boton) == LOW) { // Si se presiona el botón
    mostrarSecuencia();
    delay(500); // Esperamos medio segundo para evitar rebotes
  }
}

void mostrarSecuencia() {
  
  // Naranja
  digitalWrite(ledNaranja, HIGH);
  delay(1000); // Mantener encendido durante un segundo
  digitalWrite(ledNaranja, LOW);

  // Magenta claro (Rojo + Verde)
  digitalWrite(ledRojo, HIGH);
  digitalWrite(ledVerde, HIGH);
  delay(1000); // Mantener encendido durante un segundo
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledVerde, LOW);

  // Rojo
  digitalWrite(ledRojo, HIGH);
  delay(1000); // Mantener encendido durante un segundo
  digitalWrite(ledRojo, LOW);

  // Amarillo
  digitalWrite(ledAmarillo, HIGH);
  delay(1000); // Mantener encendido durante un segundo
  digitalWrite(ledAmarillo, LOW);

  // Azul claro (Verde + Azul)
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledAzul, HIGH);
  delay(1000); // Mantener encendido durante un segundo
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAzul, LOW);
}
