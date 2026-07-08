#include "exercice_02.h"

// Exercice 02
// Objectif: Faire clignoter la LED 10 fois et afficher le numéro sur le moniteur série.
// Concepts: boucle for, digitalWrite, Serial
void runExercice02() {
  Serial.println("Exercice 02: Clignotement 10 fois (for)");
  for (int i = 0; i < 10; ++i) {
    Serial.print("Clignotement #");
    Serial.println(i);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(150);
    digitalWrite(LED_BUILTIN, LOW);
    delay(150);
  }
  delay(200);
}
