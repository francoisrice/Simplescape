# Simplescape

A top-down, RPG game built as a continuation of development from Fantasy Fighter

The game is still in an unplayable state, but can be demoed by building from source.

To do this, you will first need [SFML](https://www.sfml-dev.org/download/sfml/2.4.2/). On Ubuntu and Linux Mint, you can
install SFML using,
```
$ sudo apt install libsfml-dev
```
You can then compile the code with the command
```
$ g++ test2.cpp -o application -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
```
Then running the application script will start the game.
The game hasn't yet been tested when not compiled from source.

# Combat Mechanics
Two levels of space: Air and Ground
You can ground light, air light, ground heavy, air heavy, ground smash, or air smash
air attacks hit jumping targets
Ground attacks are the default
Blocks block all heights of attack; but do not affect heavy attacks
Speed of actions: 
- Light - hits instantly, 40% damage
- Heavy - 1 turn to charge, then hits on following turn, 100% damage
- Smash - 2 turns to charge, then hits on following turn, negates jumping and moving, 200% damage
- Jump - in the air that turn, and enemy's turn
- Block - Starts that turn and continues for the next turn, negates jumping and moving

Blocking a light attack or heavy attack cancels the attack
Heavy attacks that are blocked cause the next turn to be spent stunned
Smash attacks ignore blocking

Each turn the player or enemy can choose to jump, move, and attack
These actions can happen in any order, therefore one could move to an 
enemy, light action, and jump one turn, and the next turn light attack, and
move away the next turn 

Each character can move two squares per turn unless there is a special condition.

# Mechanics

-
-
-