# Simplescape

A top-down, turn-based RPG game built as a continuation of development from Fantasy Fighter. THe fighter elements have been remove for the time being in favor of traditional randomized RPG combat.

The game is still in an unplayable state, but can be demoed by building from source.

To do this, you will first need [SFML](https://www.sfml-dev.org/download/sfml/2.4.2/). On Ubuntu and Linux Mint, you can
install SFML using,
```
$ sudo apt install libsfml-dev
```
You can then compile the code with the command
```
$ g++ test2.cpp -o application -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -I /include/
```
Then running the application script will start the game.
The game hasn't yet been tested when not compiled from source.

# Combat Mechanics

Each creature can move once and attack once on their turn, unless otherwise stated by a condition or ability. Each creature may move two squares per turn unless there is a special condition.

Each attack gives a character experience based on the style of attack (whether it be Melee, Magic, or Range-based). Additionally, performing actions increase a characters ability to use that action (Climbing increases climbing skill, swimming increases swimming skill).

Additionally, performing general actions, like lifting rocks, or speeching to a crowd, will increase passive skills, which will allow the ability to speak to larger or less friendly crowds, and lift bigger rocks.

Experience (XP) gained for Melee, Magic, Range, Active, and Passive skills can be used to learn abilities within that skill category.

# Goals
- Load creature/character from a file
- Restrict motion based on player
- Use creature stats for actions done
- Add items and treasure to characters
- Save experience and items to characters file 
