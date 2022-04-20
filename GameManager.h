#if !defined(GAMEMANAGER)
#define GAMEMANAGER

#include "Pet.h"
#include "Maskutchi.h"
#include "Nyorotchi.h"
#include <string>
#include <vector>
using namespace std;

class GameManager {
private:
    int currentSlot;
    vector<Pet*> loadedPets;
    
    void loadPets(); // loads pets into loadedPets
    Pet* parsePet(string text);

    void load(); // presents user load menu
    void newPet();
    void interactPet();
    void save();


    void drawMenu(vector<string> lines);
    void drawMainMenu();
    void drawLoadMenu();
    void drawNewPetMenu();
    void drawInteractPetMenu();
    void drawSaveMenu();

    int getIntegerInput(int min, int max);
    string getStringInput();
    void printInvalidInputError();
public:
    GameManager();
    ~GameManager();
    void start();
    const static void pause();

};



#endif // GAMEMANAGER
