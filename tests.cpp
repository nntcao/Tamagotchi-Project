#include "Pet.h"
#include "Maskutchi.h"
#include "Nyorotchi.h"
#include "Tarakotchi.h"
#include "GameManager.h"
#include <iostream>
using namespace std;

int main() {

    int numErrors = 0;
    string output;

    // Maskutchi
    Pet* test = new Maskutchi("test");

    (*test).load("bob", 1, "Energetic", 50, 50, 50, 50, "Maskutchi");
    output = (*test).getSummary();
    if (output != "Name: bob; Type: Maskutchi; Trait: Energetic; Age: 1 hours; Hunger: 50/100; Sleep: 50/100; Boredom: 50/100; Sadness: 50/100;") {
        cout << "Error loading Maskutchi information.";
        cout << endl;
        numErrors++;
    }

    (*test).play();
    output = (*test).getSummary();
    if (output != "Name: bob; Type: Maskutchi; Trait: Energetic; Age: 2 hours; Hunger: 63/100; Sleep: 73/100; Boredom: 3/100; Sadness: 13/100;") {
        cout << "Maskutchi Play function errored.";
        cout << endl;
        numErrors++;
    }

    (*test).sleep();
    output = (*test).getSummary();
    if (output != "Name: bob; Type: Maskutchi; Trait: Energetic; Age: 3 hours; Hunger: 76/100; Sleep: 16/100; Boredom: 6/100; Sadness: 16/100;") {
        cout << "Maskutchi Sleep function errored.";
        cout << endl;
        numErrors++;
    }

    (*test).feed();
    output = (*test).getSummary();
    if (output != "Name: bob; Type: Maskutchi; Trait: Energetic; Age: 4 hours; Hunger: 29/100; Sleep: 29/100; Boredom: 9/100; Sadness: 3/100;") {
        cout << "Maskutchi Feed function errored.";
        cout << endl;
        numErrors++;
    }

    // Nyorotchi
    delete test;
    test = new Nyorotchi("test");

    (*test).load("alice", 4, "Mellow", 50, 50, 50, 50, "Nyorotchi");
    output = (*test).getSummary();
    if (output != "Name: alice; Type: Nyorotchi; Trait: Mellow; Age: 4 hours; Hunger: 50/100; Sleep: 50/100; Boredom: 50/100; Sadness: 50/100;") {
        cout << "Error loading information.";
        cout << endl;
        numErrors++;
    }

    (*test).feed();
    output = (*test).getSummary();
    if (output != "Name: alice; Type: Nyorotchi; Trait: Mellow; Age: 5 hours; Hunger: 4/100; Sleep: 64/100; Boredom: 54/100; Sadness: 44/100;") {
        cout << "Nyorotchi Feed function errored.";
        cout << endl;
        numErrors++;
    }

    (*test).play();
    output = (*test).getSummary();
    if (output != "Name: alice; Type: Nyorotchi; Trait: Mellow; Age: 6 hours; Hunger: 18/100; Sleep: 88/100; Boredom: 43/100; Sadness: 4/100;") {
        cout << "Nyorotchi Play function errored.";
        cout << endl;
        numErrors++;
    }

    (*test).sleep();
    output = (*test).getSummary();
    if (output != "Name: alice; Type: Nyorotchi; Trait: Mellow; Age: 7 hours; Hunger: 42/100; Sleep: 32/100; Boredom: 47/100; Sadness: 8/100;") {
        cout << "Nyorotchi Sleep function errored.";
        cout << endl;
        numErrors++;
    }

    // Tarakotchi
    delete test;
    test = new Tarakotchi("test");

    (*test).load("janet", 59, "Lazy", 75, 75, 75, 75, "Tarakotchi");
    output = (*test).getSummary();
    if (output != "Name: janet; Type: Tarakotchi; Trait: Lazy; Age: 59 hours; Hunger: 75/100; Sleep: 75/100; Boredom: 75/100; Sadness: 75/100;") {
        cout << "Error loading information.";
        cout << endl;
        numErrors++;
    }

    (*test).feed();
    output = (*test).getSummary();
    if (output != "Name: janet; Type: Tarakotchi; Trait: Lazy; Age: 60 hours; Hunger: 6/100; Sleep: 96/100; Boredom: 76/100; Sadness: 56/100;") {
        cout << "Tarakotchi Feed function errored.";
        cout << endl;
        numErrors++;
    }

    (*test).play();
    output = (*test).getSummary();
    if (output != "Name: janet; Type: Tarakotchi; Trait: Lazy; Age: 61 hours; Hunger: 12/100; Sleep: 100/100; Boredom: 67/100; Sadness: 1/100;") {
        cout << "Tarakotchi Play function errored.";
        cout << endl;
        numErrors++;
    }

    (*test).sleep();
    output = (*test).getSummary();
    if (output != "Name: janet; Type: Tarakotchi; Trait: Lazy; Age: 62 hours; Hunger: 18/100; Sleep: 36/100; Boredom: 68/100; Sadness: 2/100;") {
        cout << "Tarakotchi Sleep function errored.";
        cout << endl;
        numErrors++;
    }

    if (numErrors == 0) {
        cout << "No errors found!" << endl;
    }
    else {
        cout << numErrors << " errors found." << endl;
    }

    GameManager::pause();

    return 0;
}