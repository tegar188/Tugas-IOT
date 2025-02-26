#include <Arduino.h>
#include <Arduino.h>

#define RED_LED 33
#define YELLOW_LED 32
#define GREEN_LED 34

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // Lampu Merah menyala 30 detik
  digitalWrite(RED_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, LOW);
  delay(30000);
  
  // Lampu Kuning menyala 5 detik
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(5000);
  
  // Lampu Hijau menyala 20 detik
  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(20000);
}
