#include "Character.h"
#include "Item.h"

Character::Character() {
    std::string firstName = "";
    std::string lastName = "";
    std::string party= firstName+"-"+lastName+"-"+"party.txt";

    // Wealth
    int gold=0;

    // Items
    Item helm = Item("None");
    Item chest = Item("None");
    Item gloves = Item("None");
    Item legs = Item("None");
    Item boots = Item("None");
    Item weapon_1 = Item("None");
    Item weapon_2 = Item("None");

    // Inventory - Coming Soon!!

    // Abilities - Coming Soon!!
    
};

bool Character::saveCharacter() {
    // Create a file to save all the characters attrubutes to
    std::fstream charFile;
    std::string filename = this->firstName + "-" + this->lastName + ".txt";
    charFile.open(filename, ios::out);
    if (!charFile.is_open()) {
        std::cerr << "Error opening file: " + this->firstName + "-" + this->lastName + ".txt" << std::endl;
        return -1;
    };

    // Save Basics
    charFile << "FirstName:" + this->firstName << std::endl;
    charFile << "LastName:" + this->lastName << std::endl;
    charFile << "HP:" + std::to_string(this->hp) << std::endl;
    charFile << "HP-Xp:" + std::to_string(this->hpXp) << std::endl;
    charFile << "Max-HP:" + std::to_string(this->maxHp) << std::endl;

    // Save Melee Experience
    charFile << "Light-Xp:" + std::to_string(this->lightMeleeXp) << std::endl;
    charFile << "Medium-Xp:" + std::to_string(this->mediumMeleeXp) << std::endl;
    charFile << "Heav-Xp:" + std::to_string(this->heavyMeleeXp) << std::endl;

    // Save Defensive Experience
    charFile << "Block-Xp:" + std::to_string(this->blockXp) << std::endl;
    charFile << "Dodge-Xp:" + std::to_string(this->dodgeXp) << std::endl;

    // Save Magic Experience
    charFile << "LifeAlt-Xp:" + std::to_string(this->lifeAlterationXp) << std::endl;
    charFile << "LifeAug-Xp:" + std::to_string(this->lifeAugmentationXp) << std::endl;
    charFile << "MaterialAlt-Xp:" + std::to_string(this->materialAlterationXp) << std::endl;
    charFile << "MaterialAug-Xp:" + std::to_string(this->materialAugmentationXp) << std::endl;
    charFile << "Projection-Xp:" + std::to_string(this->projectionXp) << std::endl;
    charFile << "Scrying-Xp:" + std::to_string(this->scryingXp) << std::endl;
    charFile << "Solidification-Xp:" + std::to_string(this->solidificationXp) << std::endl;
    charFile << "Summoning-Xp:" + std::to_string(this->summoningXp) << std::endl;

    // Save ranged experience
    charFile << "Bow-Xp:" + std::to_string(this->bowXp) << std::endl;
    charFile << "Thrown-Xp:" + std::to_string(this->thrownXp) << std::endl;

    // Battle Conditions
    charFile << "CanAttack?:" + std::to_string(this->canAttack) << std::endl;
    charFile << "CanMove?:" + std::to_string(this->canMove) << std::endl;
    charFile << "Stunned?:" + std::to_string(this->stunned) << std::endl;
    charFile << "Casting?:" + std::to_string(this->casting) << std::endl;

    // Wealth
    charFile << "Gold:" + std::to_string(this->gold) << std::endl;

    // Items
    charFile << "Helm:" + std::to_string(this->helm) << std::endl;
    charFile << "Chest:" + std::to_string(this->chest) << std::endl;
    charFile << "Gloves:" + std::to_string(this->gloves) << std::endl;
    charFile << "Legs:" + std::to_string(this->legs) << std::endl;
    charFile << "Boots:" + std::to_string(this->boots) << std::endl;
    charFile << "Weapon-1:" + std::to_string(this->weapon_1) << std::endl;
    charFile << "Weapon-2:" + std::to_string(this->weapon_2) << std::endl;
    // Inventory - array of items
    //charFile << "Inventory:" + std::to_string(this->casting) << std::endl;

    charFile.close();
    if (!charFile.is_open()) {
        std::cout << this->firstName + " " + this->lastName + " saved" << std::endl;
    } else {
        std::cerr << "Error closing file: " + this->firstName + "-" + this->lastName + ".txt" << std::endl;
        return -1;
    };
    return 1;
};

Character Character::loadCharacter(std::string firstName, std::string lastName) {
    // Load a character's attributes from a stored file
    fstream charFile;
    charFile.open(firstName + "-" + lastName + ".txt", ios::in);
    if (!charFile.is_open())
    {
        std::cerr << "Error opening file: " + this->firstName + "-" + this->lastName + ".txt" << std::endl;
        return -1;
    };
    Character character = Character();
    std::string data;
    std::size_t pos; 

    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.firstName = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.lastName = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.hp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.hpXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.maxHp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.lightMeleeXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.mediumMeleeXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.heavyMeleeXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.blockXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.dodgeXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.lifeAlterationXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.lifeAugmentationXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.materialAlterationXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.materialAugmentationXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.projectionXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.scryingXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.solidificationXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.summoningXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.bowXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.thrownXp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.canAttack = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.canMove = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.stunned = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    character.casting = data.substr(pos + 1);
    

    charFile.close();
    if (!charFile.is_open())
    {
        cout << character.firstName + " " + character.lastName + " loaded" << std::endl;
    }
    else
    {
        cerr << "Error closing file: " + this->firstName + "-" + this->lastName + ".txt" << std::endl;
        return -1;
    };
    return character;
};
