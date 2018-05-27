#include "Character.hpp"
// #include <string>

Character::Character() {
    std::string firstName = "";
    std::string lastName = "";
    std::string party= firstName+"-"+lastName+"-"+"party.txt";
};

bool Character::saveCharacter() {
    // Create a file to save all the characters attrubutes to
    std::fstream charFile;
    std::string filename = this->firstName + "-" + this->lastName + ".txt";
    charFile.open(filename, ios::out);
    if (!charFile.is_open())
    {
        std::cerr << "Error opening file" << std::endl;
        return -1;
    };

    // Save Basics
    charFile << "FirstName:" + this->firstName << std::endl;
    charFile << "LastName:" + this->lastName << std::endl;
    charFile << "HP:" + to_string(this->hp) << std::endl;
    charFile << "HP-Xp:" + to_string(this->hpXp) << std::endl;
    charFile << "Max-HP:" + to_string(this->maxHp) << std::endl;

    // Save Melee Experience
    charFile << "Light-Xp:" + to_string(this->lightMeleeXp) << std::endl;
    charFile << "Medium-Xp:" + to_string(this->mediumMeleeXp) << std::endl;
    charFile << "Heav-Xp:" + to_string(this->heavyMeleeXp) << std::endl;

    // Save Defensive Experience
    charFile << "Block-Xp:" + to_string(this->blockXp) << std::endl;
    charFile << "Dodge-Xp:" + to_string(this->dodgeXp) << std::endl;

    // Save Magic Experience
    charFile << "LifeAlt-Xp:" + to_string(this->lifeAlterationXp) << std::endl;
    charFile << "LifeAug-Xp:" + to_string(this->lifeAugmentationXp) << std::endl;
    charFile << "MaterialAlt-Xp:" + to_string(this->materialAlterationXp) << std::endl;
    charFile << "MaterialAug-Xp:" + to_string(this->materialAugmentationXp) << std::endl;
    charFile << "Projection-Xp:" + to_string(this->projectionXp) << std::endl;
    charFile << "Scrying-Xp:" + to_string(this->scryingXp) << std::endl;
    charFile << "Solidification-Xp:" + to_string(this->solidificationXp) << std::endl;
    charFile << "Summoning-Xp:" + to_string(this->summoningXp) << std::endl;

    // Save ranged experience
    charFile << "Bow-Xp:" + to_string(this->bowXp) << std::endl;
    charFile << "Thrown-Xp:" + to_string(this->thrownXp) << std::endl;

    // Battle Conditions
    charFile << "CanAttack?:" + to_string(this->canAttack) << std::endl;
    charFile << "CanMove?:" + to_string(this->canMove) << std::endl;
    charFile << "Stunned?:" + to_string(this->stunned) << std::endl;
    charFile << "Casting?:" + to_string(this->casting) << std::endl;

    charFile.close();
    if (!charFile.is_open()) {
        std::cout << this->firstName + " " + this->lastName + " saved" << std::endl;
    } else {
        std::cerr << "Error closing file: " + this->firstName + "-" + this->lastName + ".txt" << std::endl;
        return -1;
    };
    return 1;
};

Character Character::loadCharacter(string firstName, string lastName) {

    

};

