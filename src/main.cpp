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

#define led_01 2
#define max_led 5
#define timeDelay 500

#define button_01 9
int compteur_btn = 0;

// put function definitions here:

void setup() {
  
  Serial.begin(115200);
  while (!Serial) { }
  delay(100);
  Serial.println("--- Lancement des exercices ---");
  // Préparer la LED intégrée pour les exercices
  pinMode(LED_BUILTIN, OUTPUT);  
  pinMode(button_01, INPUT_PULLUP);

  /*
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
x
  for(int i=led_01; i<=max_led+ 1; i++){
    pinMode(i, OUTPUT);
    Serial.print("la broche ");
    Serial.print(i);
    Serial.println(" est en mode OUTPUT");
    Serial.println();
    digitalWrite(i, LOW);
  }

  //allumage succesive des leds
  for(int i=led_01; i<=max_led+1; i++){
    digitalWrite(i, HIGH);
    Serial.print("la led sur D");
    Serial.print(i);
    Serial.println(" est allumée");
    delay(timeDelay);
  }

  */

/*
  // extincrion des leds
  for(int i=max_led + 1; i>=led_01; i--){
    digitalWrite(i, LOW);
    Serial.print("la led sur D");
    Serial.print(i);
    Serial.println(" est éteinte");
    delay(timeDelay);
  }
*/
  /* 
int compteur_leds = 6;
while (compteur_leds  <= 6 )
{

  digitalWrite(compteur_leds, LOW);
  Serial.print("la led sur D");
  Serial.print(compteur_leds);
  Serial.println(" est éteinte");
  delay(timeDelay);
  compteur_leds = compteur_leds -1;
  if(compteur_leds == 1 )break;  
  
}
  code */

}

void loop() {
  // put your main code here, to run repeatedly:

  int etat_button = digitalRead(button_01);

  /*
    Serial.print("l'etat du bouton  sur D");
  Serial.print(button_01);
  Serial.print(" est ");
  Serial.println(etat_button);
  delay(100);

  */

  if(etat_button == LOW){
    compteur_btn++;
    Serial.print("le bouton a été appuyé ");
    Serial.print(compteur_btn);
    Serial.println(" fois");
    delay(300);
  }
  
  if(compteur_btn == 1){
    digitalWrite(LED_BUILTIN, HIGH);
  } else{
    digitalWrite(LED_BUILTIN, LOW);
  }


}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}