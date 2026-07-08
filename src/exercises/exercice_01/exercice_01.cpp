#include "exercice_01.h"

// Exercice 01
// Objectif: Affiche un message sur le moniteur série et allume la LED brièvement.
// Concepts: sortie série, commande d'une LED (digitalWrite)
void runExercice01() {
  Serial.println("Exercice 01: Bonjour! Allumage LED 500ms.");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}
