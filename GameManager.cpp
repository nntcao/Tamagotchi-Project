#include "GameManager.h"
#include <iostream>
using namespace std;

GameManager::GameManager() {
    currentSlot = 0;
}

void GameManager::start() {
    drawMainMenu();
}

void GameManager::load() {

}

void GameManager::newPet() {

}

void GameManager::interactPet() {

}

void GameManager::save() {

}

void GameManager::drawMenu(vector<string> text) {
    cout << endl;
    for (unsigned int i = 0; i < text.size(); i++ ) {
        cout << "///" << text.at(i) << endl;
    }
    cout << endl;
}

void GameManager::drawMainMenu() {
    vector<string> text;
    text.push_back("Welcome to Tamagotchi! Please select an option:");
    text.push_back("1. Load Pet");
    text.push_back("2. Create New Pet");
    text.push_back("3. Exit");

    drawMenu(text);
}

void GameManager::drawLoadMenu() {

}

void GameManager::drawNewPetMenu() {

}

void GameManager::drawInteractPetMenu() {

}

void GameManager::drawSaveMenu() {

}


