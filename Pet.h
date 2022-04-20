#if !defined(PET)
#define PET

#include <string>
#include <vector>
using namespace std;

class Pet {
private:
    static const vector<string> possibleTraits;
    void printWarning(string stat, int amount);

protected:
    void changeStat(int deltaHunger, int deltaSleep, int deltaBoredom, int deltaSadness);
    void interaction(int deltaHunger, int deltaSleep, int deltaBoredom, int deltaSadness);
    int hunger;
    int sleepiness;
    int boredom;
    int sadness;
    string name;
    string trait;
    string type;
    int hoursAged;

public:
    Pet(string _name, string _type);
    string getSummary();
    string getSaveString();
    virtual void feed();
    virtual void play();
    virtual void sleep();
    virtual void nextHour();
    void printWarnings();

    void load(string _name, int _hoursAged, string _trait, int _hunger, int _sleepiness, int _boredom, int _sadness, string _type);
};



#endif // PET