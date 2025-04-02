#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};

enum class menu_section {background, music, sound, controls, texture};

int main(){
    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int)asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}