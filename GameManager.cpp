#include "GameManager.h"
#include "Tarakotchi.h"
#include "Maskutchi.h"
#include "Nyorotchi.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

GameManager::GameManager() {
    loadPets();
    currentSlot = -1;
}

int GameManager::getIntegerInput(int min, int max) {
    int input;
    cin >> input;
    while (cin.fail() || (input < min || input > max)) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        printInvalidInputError();
        cin >> input;
    }
    return input;
}

string GameManager::getStringInput() {
    string text;
    cin >> text;
    return text;
}

void GameManager::start() {
    int option = -1;
    bool exit = false;

    while (exit == false) {
        drawMainMenu();
        option = getIntegerInput(0, 2);
        switch(option) {
            case 0:
                cout << "See you later! Exiting Tamagotchi..." << endl;
                currentSlot = -1;
                exit = true;
                cout << endl;
                system("PAUSE");
                break;
            case 1:
                newPet();
                break;
            case 2:
                load();
                break;
            default:
                printInvalidInputError();
                break;
        }
        if (currentSlot != -1) {
            interactPet();
        }
    }
}

void GameManager::loadPets() {
    ifstream saveFile;
    saveFile.open("save.txt");
    if (saveFile.is_open()) {
        loadedPets.clear();
        
        string text;
        getline(saveFile, text);
        while (!saveFile.fail()) {
            loadedPets.push_back(parsePet(text));
            getline(saveFile, text);
        }
    }
}

Pet GameManager::parsePet(string text) {
    stringstream textStream(text);

    string name;
    int hoursAged;
    string trait;
    int hunger;
    int sleepiness;
    int boredom;
    int sadness;
    string type;

    textStream >> name;
    textStream >> hoursAged;
    textStream >> trait;
    textStream >> hunger;
    textStream >> sleepiness;
    textStream >> boredom;
    textStream >> sadness;
    textStream >> type;

    if (type == "Maskutchi") {
        Maskutchi newPet;
        newPet.load(name, hoursAged, trait, hunger, sleepiness, boredom, sadness, type);
        return newPet;
    }
    else if (type == "Nyorotchi") {
        Nyorotchi newPet;
        newPet.load(name, hoursAged, trait, hunger, sleepiness, boredom, sadness, type);
        return newPet;
    }
    else if (type == "Tarakotchi") {
        Tarakotchi newPet;
        newPet.load(name, hoursAged, trait, hunger, sleepiness, boredom, sadness, type);
        return newPet;
    } else {
        Pet newPet("Error", "Error");
        newPet.load(name, hoursAged, trait, hunger, sleepiness, boredom, sadness, type);
        return newPet;
    }

}

void GameManager::load() {
    int option = -1;
    drawLoadMenu();

    while (option != 0) {
        option = getIntegerInput(0, loadedPets.size());
        if (option > 0 && option <= loadedPets.size()) {
            currentSlot = option - 1;
            break;
        }
        else if (option != 0) {
            printInvalidInputError();
        }
    }
}

void GameManager::newPet() {
    int option = -1;
    string name = "";
    drawNewPetMenu();

    while (option != 0) {
        option = getIntegerInput(0, 3);
        switch (option) {
            case 0:
                break;
            case 1:
                cout << endl << "Please enter a name: " << endl;
                name = getStringInput();
                loadedPets.push_back(Tarakotchi(name));
                currentSlot = loadedPets.size() - 1;

                cout << endl << "New Tamagotchi created: " << endl;
                cout << loadedPets.at(currentSlot).getSummary() << endl;

                option = 0;
                break;
            case 2:
                cout << endl << "Please enter a name: " << endl;
                name = getStringInput();
                loadedPets.push_back(Nyorotchi(name));
                currentSlot = loadedPets.size() - 1;

                cout << endl << "New Tamagotchi created: " << endl;
                cout << loadedPets.at(currentSlot).getSummary() << endl;

                option = 0;
                break;
            case 3:
                cout << endl << "Please enter a name: " << endl;
                name = getStringInput();
                loadedPets.push_back(Maskutchi(name));
                currentSlot = loadedPets.size() - 1;

                cout << endl << "New Tamagotchi created: " << endl;
                cout << loadedPets.at(currentSlot).getSummary() << endl;

                option = 0;
                break;
            default:
                printInvalidInputError();
                break;
        }
    }
}

void GameManager::interactPet() {

}

void GameManager::save() {

}

void GameManager::drawMenu(vector<string> text) {
    cout << endl;
    cout << "______________________________________________________________________________________" << endl;
    for (unsigned int i = 0; i < text.size(); i++ ) {
        cout << "///    " << text.at(i) << endl;
    }
}

void GameManager::drawMainMenu() {
    vector<string> text;
    text.push_back("Welcome to Tamagotchi! Please select an option:");
    text.push_back("0. Exit");
    text.push_back("1. Create New Pet");
    text.push_back("2. Load");

    drawMenu(text);
}

void GameManager::drawLoadMenu() {
    vector<string> text;
    text.push_back("0. Go Back");
    text.push_back("");
    text.push_back("Please select a pet to load: ");
    if (loadedPets.size() == 0) {
        text.push_back("No pets found.");
    } else {
        for (unsigned int i = 0; i < loadedPets.size(); i++) {
            text.push_back(to_string(i + 1) + ". " + loadedPets.at(i).getSummary());
        }
    }

    drawMenu(text);
}

void GameManager::drawNewPetMenu() {
    vector<string> text;
    text.push_back("0. Go Back");
    text.push_back("");
    text.push_back("Please select a pet to create: ");
    text.push_back("1. " + Tarakotchi::defaultName + " - " + Tarakotchi::description);
    text.push_back("2. " + Nyorotchi::defaultName + " - " + Nyorotchi::description);
    text.push_back("3. " + Maskutchi::defaultName + " - " + Maskutchi::description);

    drawMenu(text);
}

void GameManager::drawInteractPetMenu() {

}

void GameManager::drawSaveMenu() {

}

void GameManager::printInvalidInputError() {
    cout << endl << "Invalid input! Please input again:" << endl;
}
