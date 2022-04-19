#if !defined(PET)
#define PET

#include <string>

class Pet {
private:
    int hunger;
    int sleepiness;
    int boredom;
    int sadness;
    string name;
    string trait;
    string type;
    int hoursAged;

protected:
    void interaction(int deltaHunger, int deltaSleep, int deltaBoredom, int deltaSadness);

public:
    Pet(string _name, string _type);
    string getSummary();
    string getSaveString();
    virtual void feed();
    virtual void play();
    virtual void sleep();
    virtual void nextHour();
    void printWarnings();
}



#endif // PET