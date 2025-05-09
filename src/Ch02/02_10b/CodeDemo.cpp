// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.55;
    sprite_x = target_x;
    player_x = sprite_x;
    
    std::cout << "target_x = " << target_x << std::endl;
    std::cout << "sprite_x = " << sprite_x << std::endl;
    std::cout << "player_x = " << player_x << std::endl; 
    return 0;
}
