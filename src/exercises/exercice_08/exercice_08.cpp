#include "exercice_08.h"

// Exercice 08
// Objectif: Exemple de boucle do-while avec contrôle LED.
// Concepts: do-while, Serial, digitalWrite
void runExercice08() {
  Serial.println("Exercice 08: do-while — clignotement minimal une fois");
  int i = 0;
  do {
    Serial.print("Itération: ");
    Serial.println(i);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(150);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    i++;
  } while (i < 3);
  delay(200);
}
