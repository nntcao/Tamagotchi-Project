#if !defined(GAMEMANAGER)
#define GAMEMANAGER

#include "Pet.h"
#include "Maskutchi.h"
#include "Nyorotchi.h"
#include <string>
#include <vector>

class GameManager {
private:
    int saveSlot;
    Pet currentPet;
    vector<Pet> loadedPets;

public:
    GameManager();
    void start();
    void load();
    void newPet();
    void interactPet();
    void save();

    void drawMenu(vector<string> lines);
    void drawMainMenu();
    void drawLoadMenu();
    void drawNewPetMenu();
    void drawInteractPetMenu();
    void drawSaveMenu();
}



#endif // GAMEMANAGER
