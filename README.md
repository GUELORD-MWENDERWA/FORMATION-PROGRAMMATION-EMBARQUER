# Embedded Programming Fundamentals (Arduino, C++)

A progressive set of exercises for learning embedded C/C++ on Arduino. Each exercise isolates one programming concept and makes it observable on real hardware through the serial monitor, the on-board LED or a push button.

The course is written for beginners: no prior microcontroller experience is assumed.

## Curriculum

| # | Topic | What you practice |
| --- | --- | --- |
| 01 | First program | Serial output, driving the built-in LED |
| 02 | `for` loops | Blinking a LED a fixed number of times |
| 03 | `while` loops | Countdown with visual feedback |
| 04 | Conditionals | Even/odd test driving the LED |
| 05 | `break` | Leaving a loop early |
| 06 | Nested loops | Progressive LED patterns |
| 07 | `switch` | Replacing chains of `if` on a single value |
| 08 | `do ... while` | Loops that run at least once |
| 09 | Arrays | Iterating and accumulating values |
| 10 | Timing | Using `millis()` to derive values and compare states |
| 11-17 | Extensions | Declared in `include/`, in progress |

Every exercise has its own directory under [`src/exercises/`](src/exercises) with a README stating the objective and a commented solution.

## Requirements

- Arduino Uno or Nano
- USB cable, one LED with a 220 ohm resistor (optional, the built-in LED is enough), one push button
- [PlatformIO](https://platformio.org/) (VS Code extension or CLI)

## Getting started

```bash
git clone https://github.com/GUELORD-MWENDERWA/FORMATION-PROGRAMMATION-EMBARQUER.git
cd FORMATION-PROGRAMMATION-EMBARQUER
pio run -e uno -t upload      # or: -e nano
pio device monitor -b 115200
```

`src/main.cpp` includes every exercise. Uncomment the `runExerciseXX()` call you want to run in `setup()` or `loop()`, then upload again.

## Project layout

```
include/            One header per exercise (runExerciseXX declarations)
src/main.cpp        Exercise runner
src/exercises/      Exercise sources and instructions
test/               Algorithm drafts used to prepare the exercises
platformio.ini      Build environments: uno, nano
```

## How to use this course

1. Read the exercise README and predict what the board will do.
2. Upload and compare the result with your prediction.
3. Modify one parameter at a time (delay, loop bound, condition) and observe the effect.

## License

No license has been specified yet. Contact the author before reusing this material.
