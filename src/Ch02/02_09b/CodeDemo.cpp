// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character {
    std::string name;
    int level;
    character_role role;
};

int main(){
    game_character player;

    player.name = "Minh Anh";
    player.level = 5;
    player.role = character_role::npc;
    
    std::cout << "My name is " << player.name << ". My level is " << player.level << " and I am a " << (int)player.role << "." << std::endl;
    return 0;
}
