using namespace std;

#include "Pet.h"
#include <random>
#include <string>
#include <algorithm>
#include <iostream>

Pet::Pet(string _name, string _type) {
    hunger = rand() % 51;
    sleepiness = rand() % 51;
    boredom = rand() % 51;
    sadness = rand() % 51;
    name = _name;
    type = _type;
    hoursAged = 0;
}

string Pet::getSummary() {
    return name + "; Trait: " + trait + "; Age: " + to_string(hoursAged) + " hours; Hunger: " + to_string(hunger) + "/100; Sleep: " + to_string(sleepiness) + "/100; Boredom: " + to_string(boredom) + "/100; Sadness: " + to_string(sadness) + "/100;";
}

string Pet::getSaveString() {
    return name + " " + to_string(hoursAged) + " " + trait + " " + to_string(hunger) + " " + to_string(sleepiness) + " " + to_string(boredom) + " " + to_string(sadness) + " " + type;
}

void Pet::interaction(int deltaHunger, int deltaSleep, int deltaBoredom, int deltaSadness) {
    hunger = max(0, min(hunger + deltaHunger, 100));
    sleepiness = max(0, min(sleepiness + deltaSleep, 100));
    boredom = max(0, min(boredom + deltaBoredom, 100));
    sadness = max(0, min(sadness + deltaSadness, 100));
}

void Pet::feed() {
    interaction(-40, -20, 0, 5);
}

void Pet::play() {
    interaction(20, 15, -40, -40);
}

void Pet::sleep() {
    interaction(20, -50, 0, 0);
}

void Pet::nextHour() {
    interaction(2, 2, 2, 2);
}

void Pet::printWarning(string stat, int amount) {
    if (amount > 40) {
        cout << "Warning! " + name + " is " + stat + " with " + to_string(amount) + "/100" << endl;
    }
}

void Pet::printWarnings() {
    printWarning("hungry", hunger);
    printWarning("sad", sadness);
    printWarning("bored", boredom);
    printWarning("sleepy", sleepiness);
}
