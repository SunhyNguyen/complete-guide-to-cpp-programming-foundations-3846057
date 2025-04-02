#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};

enum class menu_section {background, music, sound, controls, texture};

int main(){
    int asset_value;

    asset_value = (int)asset_type::sound;

    std::cout << "asset_value = " << asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}