#if !defined(NYOROTCHI)
#define NYOROTCHI

#include "Pet.h"
#include <string>
using namespace std;

class Nyorotchi : public Pet {
    public:
        static const string defaultName;
        static const string description;

        Nyorotchi();
        Nyorotchi(string _name);
        void feed();
        void play();
        void sleep();
        void nextHour();
};


#endif // NYOROTCHI
