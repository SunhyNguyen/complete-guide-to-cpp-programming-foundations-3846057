#include <iostream>
#include <cstdint>

enum asset_type {texture, sound, animation, script};

int main(){
    int sound = 8;

    int asset_value;

    asset_value = sound;

    std::cout << "asset_value = " << asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}