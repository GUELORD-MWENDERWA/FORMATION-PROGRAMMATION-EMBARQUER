Exercice 01

Objectif: Afficher un message sur le moniteur série et allumer la LED intégrée brièvement.

Explication:

- Initialise le port série dans `setup()`.
- Utilise `Serial.println` pour envoyer du texte au moniteur série.
- Utilise `digitalWrite(LED_BUILTIN, HIGH/LOW)` pour allumer/éteindre la LED.

But pédagogique: se familiariser avec la sortie série, le contrôle d'une LED et le cycle `setup()`/`loop()`.
