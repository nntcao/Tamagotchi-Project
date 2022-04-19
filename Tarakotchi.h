#if !defined(TARAKOTCHI)
#define TARAKOTCHI

#include "Pet.h"
#include <string>
using namespace std;

class Tarakotchi : public Pet {
    public:
        static const string defaultName;
        static const string description;

        Tarakotchi();
        Tarakotchi(string _name);
        void feed();
        void play();
        void sleep();
        void nextHour();
};


#endif // TARAKOTCHI
