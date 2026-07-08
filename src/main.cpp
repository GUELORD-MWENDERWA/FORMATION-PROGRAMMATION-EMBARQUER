#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
// include des exercices
#include "exercice_01.h"
#include "exercice_02.h"
#include "exercice_03.h"
#include "exercice_04.h"
#include "exercice_05.h"
#include "exercice_06.h"
#include "exercice_07.h"
#include "exercice_08.h"
#include "exercice_09.h"
#include "exercice_10.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial) { }
  delay(100);
  Serial.println("--- Lancement des exercices ---");
  // Préparer la LED intégrée pour les exercices
  pinMode(LED_BUILTIN, OUTPUT);
  // Appel des exercices (affichages sur le moniteur série)
  runExercice01();
  runExercice02();
  runExercice03();
  runExercice04();
  runExercice05();
  runExercice06();
  runExercice07();
  runExercice08();
  runExercice09();
  runExercice10();
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}