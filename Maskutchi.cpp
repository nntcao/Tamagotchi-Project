#include "Maskutchi.h"
#include <string>

const string Maskutchi::defaultName = "Maskutchi";
const string Maskutchi::description = "Maskutchi has a bean-shaped body with a pair of violet ears on top, and wears a violet mask.";

Maskutchi::Maskutchi() : Pet(defaultName, defaultName) {}

Maskutchi::Maskutchi(string _name) : Pet(_name, defaultName) {}

void Maskutchi::feed() {
    interaction(-50, 10, 0, -20);
}

void Maskutchi::play() {
    interaction(10, 20, -80, -40);
}

void Maskutchi::sleep() {
    interaction(10, -60, 0, 0);
}

void Maskutchi::nextHour() {
    interaction(3, 3, 3, 3);
}
