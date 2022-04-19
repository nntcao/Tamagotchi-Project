#include "Nyorotchi.h"
#include <string>

const string Nyorotchi::defaultName = "Nyorotchi";
const string Nyorotchi::description = "He resembles Kuchitamatchi with a blue head and a long, wriggling tail-like body.";

Nyorotchi::Nyorotchi() : Pet(defaultName, defaultName) {}

Nyorotchi::Nyorotchi(string _name) : Pet(_name, defaultName) {}

void Nyorotchi::feed() {
    interaction(-60, 10, 0, -10);
}

void Nyorotchi::play() {
    interaction(10, 20, -15, -50);
}

void Nyorotchi::sleep() {
    interaction(20, -60, 0, 0);
}

void Nyorotchi::nextHour() {
    interaction(4, 4, 4, 4);
}
