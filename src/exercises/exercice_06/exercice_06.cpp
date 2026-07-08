#include "exercice_06.h"

// Exercice 06
// Objectif: Boucles imbriquées — créer un motif LED simple.
// Concepts: boucles imbriquées, Serial, digitalWrite
void runExercice06() {
  Serial.println("Exercice 06: Motif LED avec boucles imbriquées");
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j <= i; ++j) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(120);
      digitalWrite(LED_BUILTIN, LOW);
      delay(80);
    }
    Serial.print("Ligne ");
    Serial.println(i + 1);
    delay(150);
  }
  delay(200);
}
