#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "Creature.hpp"
#include <string>
#include <fstream>
#include <iostream>

class Character : public Creature {
public:
    Character();
    bool saveCharacter();
    Character loadCharacter(std::string,std::string);


    // Any other classes or functions within this class...

    // A class can be created with a function so that the main function
    // can change attributes of the instantiated object 

};

#endif