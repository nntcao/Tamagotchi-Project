#include "Tarakotchi.h"
#include <string>

const string Tarakotchi::defaultName = "Tarakotchi";
const string Tarakotchi::description = "Tarakotchi has giant lips and thin legs but no arms, a small tuft of hair rendered as a mohawk in some artworks, pink cheeks, and a fat, bean-shaped body - in the original Japanese artwork, he had visible toes.";

Tarakotchi::Tarakotchi() : Pet(defaultName, defaultName) {}

Tarakotchi::Tarakotchi(string _name) : Pet(_name, defaultName) {}

void Tarakotchi::feed() {
    interaction(-70, 20, 0, -20);
}

void Tarakotchi::play() {
    interaction(5, 10, -10, -70);
}

void Tarakotchi::sleep() {
    interaction(5, -65, 0, 0);
}

void Tarakotchi::nextHour() {
    interaction(1, 1, 1, 1);
}
