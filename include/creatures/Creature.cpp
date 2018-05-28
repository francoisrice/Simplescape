 #include "Creature.h"

Creature::Creature() {
    float hp = 20;
    int hpXp = 0;
    float maxHp = 20; // standard max hp should be 20 hp, for the set damage
    
    int lightMeleeXp=0;
    int mediumMeleeXp=0;
    int heavyMeleeXp=0;

    int blockXp=0;
    int dodgeXp=0;

    // Types of Magic
    int lifeAlterationXp=0;
    int lifeAugmentationXp=0;
    int materialAlterationXp=0;
    int materialAugmentationXp=0;
    int projectionXp=0;
    int scryingXp=0;
    int solidificationXp=0;
    int summoningXp=0;

    // Type of ranged attacks
    int bowXp=0;
    int thrownXp=0;

    // Creature states
    bool canAttack = 1;
    bool canMove = 1;
    bool stunned = 0;
    bool casting = 0;
};

Creature::~Creature(){};

/* 
bool Creature::saveCreature() {
    // Create a file with all the attributes of the instantiated class
    fstream charFile;
    std::string filename = this->firstName + "-" + this->lastName + ".txt";
    charFile.open(filename, ios::out);
    if (!charFile.is_open())
    {
        cerr << "Error opening file" << endl;
        return -1;
    };

    float hp;
    int hpXp;
    float maxHp = 20; // standard max hp should be 20 hp, for the set damage

    int lightMeleeXp;
    int mediumMeleeXp;
    int heavyMeleeXp;

    int blockXp;
    int dodgeXp;

    // Types of Magic
    int lifeAlterationXp;
    int lifeAugmentationXp;
    int materialAlterationXp;
    int materialAugmentationXp;
    int projectionXp;
    int scryingXp;
    int solidificationXp;
    int summoningXp;

    // Type of ranged attacks
    int bowXp;
    int thrownXp;

    // Creature states
    bool canAttack = 1;
    bool canMove = 1;
    bool stunned = 0;
    bool casting = 0;

    // These may be unnecessary
    int turnCounter;
    int party_num;

    charFile << "FirstName:" + this->firstName << endl;
    charFile << "LastName:" + this->lastName << endl;
    charFile << "Age:" + to_string(this->age) << endl;
    charFile << "Speed:" + to_string(this->speed) << endl;
    charFile << "Length:" + to_string(this->length) << endl;

    charFile.close();
    if (!charFile.is_open())
    {
        cout << this->firstName + " " + this->lastName + " saved" << endl;
    }
    else
    {
        cerr << "Error closing file: " + this->firstName + "-" + this->lastName + ".txt" << endl;
        return -1;
    };
    return 1;
};
 */

/* 
Creature Creature::loadCreature(string firstName, string lastName) {
    // Create a file with all the attributes of the instantiated class
    fstream charFile;
    charFile.open(firstName + "-" + lastName + ".txt", ios::in);
    if (!charFile.is_open())
    {
        cerr << "Error opening file" << endl;
        return -1;
    };
    Shape guy = Shape();
std:;
    string data;
    char a = 58; // ':'

    charFile >> data;
    cout << data << endl;
    size_t pos = data.find(":");
    guy.firstName = data.substr(pos + 1);
    charFile >> data;
    cout << data << endl;
    pos = data.find(":");
    guy.lastName = data.substr(pos + 1);

    charFile.close();
    if (!charFile.is_open())
    {
        cout << guy.firstName + " " + guy.lastName + " loaded" << endl;
    }
    else
    {
        cerr << "Error closing file: " + this->firstName + "-" + this->lastName + ".txt" << endl;
        return -1;
    };
    return guy;
}; 
*/