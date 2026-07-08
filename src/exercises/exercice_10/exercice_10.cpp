#include "exercice_10.h"

// Exercice 10
// Objectif: Simuler une lecture capteur et contrôler la LED en conséquence.
// Concepts: millis(), condition, Serial, digitalWrite
void runExercice10() {
  Serial.println("Exercice 10: Lecture capteur simulée et contrôle LED");
  int sensor = (millis() / 1000) % 100; // valeur simulée (0..99)
  Serial.print("Valeur capteur simulée: ");
  Serial.println(sensor);
  if (sensor > 50) {
    Serial.println("Etat: HAUT -> LED ON");
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    Serial.println("Etat: BAS -> LED OFF");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(300);
}
