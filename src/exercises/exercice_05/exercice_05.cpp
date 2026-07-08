#include "exercice_05.h"

// Exercice 05
// Objectif: Boucle for avec interruption (break) et LED montrant l'état.
// Concepts: boucle for, break, Serial, LED
void runExercice05() {
  Serial.println("Exercice 05: Boucle for avec break (arrêt à 5), LED clignote");
  for (int i = 0; i < 10; ++i) {
    if (i == 5) {
      Serial.println("Break rencontré à 5 — arrêt de la boucle");
      digitalWrite(LED_BUILTIN, LOW);
      break;
    }
    Serial.print("i = ");
    Serial.println(i);
    // clignoter la LED une fois pour chaque itération
    digitalWrite(LED_BUILTIN, HIGH);
    delay(120);
    digitalWrite(LED_BUILTIN, LOW);
    delay(120);
  }
  delay(200);
}
