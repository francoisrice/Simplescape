#ifndef UNIT_H
#define UNIT_H
#include <string>
#include <stdlib.h> //rand()

class Unit : public Creature {
public:
    Unit();
    ~Unit();
    Unit(bool);
    std::string getName();
    bool saveUnit();
    Unit loadUnit(std::string);
    int goldDrop(int);

    // Save and load Units as a group? Yes. Here? Maybe not...
    // bool saveUnit();
    // Unit loadUnit(string,string);


    // Any other classes or functions within this class...

    // A class can be created with a function so that the main function
    // can change attributes of the instantiated object 

};

#endif