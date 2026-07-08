#include "exercice_03.h"

// Exercice 03
// Objectif: Compte à rebours avec une boucle while et clignotement correspondant.
// Concepts: boucle while, digitalWrite, Serial
void runExercice03() {
  Serial.println("Exercice 03: Compte à rebours 5..1 (while) avec LED");
  int n = 5;
  while (n > 0) {
    Serial.println(n);
    // clignoter n fois rapidement
    for (int k = 0; k < n; ++k) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(80);
      digitalWrite(LED_BUILTIN, LOW);
      delay(80);
    }
    n--;
    delay(200);
  }
  Serial.println("Fini");
  delay(200);
}
