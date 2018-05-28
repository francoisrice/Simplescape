#include "Unit.h"

Unit::Unit() {
    std::string Name="";
    bool friendly=0;
    int atkBonus=0;
    int defBonus=0;
    // int rangeBonus=0;

    // Implement for Unit evolution (ie Squire -> Knight)
    int genXP=0;
    
    // Wealth
    int tier;
    
    // Coming Soon
    // Loot - array of chance drops
    // std::string drops;

};

Unit::Unit(bool n){this->friendly =n;}

std::string Unit::getName(){return this->Name;}

bool Unit::saveUnit(){
    // Create a file to save all the characters attrubutes to
    std::fstream charFile;
    std::string filename = this->Name+".txt";
    charFile.open(filename, ios::out);
    if (!charFile.is_open())
    {
        std::cerr << "Error opening file: " + this->Name+".txt" << std::endl;
        return -1;
    };

    // Save Basics
    charFile << "Name:" + this->Name << std::endl;
    charFile << "HP:" + std::to_string(this->hp) << std::endl;
    charFile << "Max-HP:" + std::to_string(this->maxHp) << std::endl;
    charFile << "Friendly?:" + std::to_string(this->friendly) << std::endl;
    charFile << "Atk-Bonus:" + std::to_string(this->atkBonus) << std::endl;
    charFile << "Def-Bonus:" + std::to_string(this->defBonus) << std::endl;
    //charFile << "Range-Bonus:" + std::to_string(this->defBonus) << std::endl;

    // Battle Conditions
    charFile << "CanAttack?:" + std::to_string(this->canAttack) << std::endl;
    charFile << "CanMove?:" + std::to_string(this->canMove) << std::endl;
    charFile << "Stunned?:" + std::to_string(this->stunned) << std::endl;
    charFile << "Casting?:" + std::to_string(this->casting) << std::endl;

    // Wealth
    charFile << "Gold-tier:" + std::to_string(this->tier) << std::endl;

    // Inventory - array of items
    //charFile << "Inventory:" + std::to_string(this->casting) << std::endl;

    charFile.close();
    if (!charFile.is_open()){
        std::cout << this->Name +" saved" << std::endl;
    } else {
        std::cerr << "Error closing file: " + this->Name+".txt" << std::endl;
        return -1;
    };
    return 1;
};

Unit Unit::loadUnit(std::string name){
    std::fstream charFile;
    std::string filename = this->Name + ".txt";
    charFile.open(filename, ios::in);
    if (!charFile.is_open())    {
        std::cerr << "Error opening file: " + this->Name + ".txt" << std::endl;
        return -1;
    };
    Unit unit = Unit();
    std::string data;
    std::size_t = pos;

    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.Name = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.hp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.maxHp = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.friendly = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.atkBonus = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.defBonus = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.canAttack = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.canMove = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.stunned = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.casting = data.substr(pos + 1);
    charFile >> data;
    cout << data << std::endl;
    pos = data.find(":");
    unit.tier = data.substr(pos + 1);

    charFile.close();
    if (!charFile.is_open())    {
        std::cout << this->Name + " loaded" << std::endl;
    }    else    {
        std::cerr << "Error closing file: " + this->Name + ".txt" << std::endl;
        return -1;
    };
};

int Unit::goldDrop(int tier) {
    int gold=0;
    for (int k=0;k<tier;k++){
        gold += (rand()%12)+1;
    }
    return gold;
};