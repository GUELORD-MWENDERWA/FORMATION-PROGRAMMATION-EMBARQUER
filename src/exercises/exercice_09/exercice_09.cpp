#include "exercice_09.h"

// Exercice 09
// Objectif: Utiliser un tableau pour définir un motif de clignotement (durées).
// Concepts: tableaux, boucle for, Serial, digitalWrite
void runExercice09() {
  Serial.println("Exercice 09: Motif LED à partir d'un tableau de durées (ms)");
  int motif[] = {100, 200, 50, 300};
  for (unsigned int i = 0; i < sizeof(motif)/sizeof(motif[0]); ++i) {
    Serial.print("Motif "); Serial.print(i); Serial.print(" : "); Serial.println(motif[i]);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(motif[i]);
    digitalWrite(LED_BUILTIN, LOW);
    delay(80);
  }
  delay(200);
}
