#include "exercice_04.h"

// Exercice 04
// Objectif: Tester si un nombre est pair/impair et allumer la LED si pair.
// Concepts: condition if/else, digitalWrite, Serial
void runExercice04() {
  Serial.println("Exercice 04: Test pair/impair et LED si pair");
  int n = 7; // exemple — tu peux modifier cette valeur
  if (n % 2 == 0) {
    Serial.println("Le nombre est pair. LED ON");
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    Serial.println("Le nombre est impair. LED OFF");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(300);
}
