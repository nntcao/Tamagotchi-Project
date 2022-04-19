#if !defined(MASKUTCHI)
#define MASKUTCHI

#include "Pet.h"
#include <string>

class Maskutchi : public Pet {
    public:
        static const string defaultName;
        static const string description;

        Maskutchi();
        Maskutchi(string _name);
        void feed();
        void play();
        void sleep();
        void nextHour();
};


#endif // MASKUTCHI
