#include "exercice_07.h"

// Exercice 07
// Objectif: Utiliser switch/case pour sélectionner un mode de clignotement.
// Concepts: switch, case, Serial, digitalWrite
void runExercice07() {
  Serial.println("Exercice 07: Modes de clignotement (switch)");
  int mode = 2; // 1=lent, 2=normal, 3=rapide
  int t = 200;
  switch (mode) {
    case 1: t = 400; Serial.println("Mode lent"); break;
    case 2: t = 200; Serial.println("Mode normal"); break;
    case 3: t = 80; Serial.println("Mode rapide"); break;
    default: t = 200; Serial.println("Mode par défaut"); break;
  }
  // clignoter 3 fois avec le tempo choisi
  for (int i = 0; i < 3; ++i) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(t);
    digitalWrite(LED_BUILTIN, LOW);
    delay(t);
  }
  delay(200);
}
