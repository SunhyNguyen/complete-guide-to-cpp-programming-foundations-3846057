// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto x = "Minh ANh";

    std::cout << typeid(x).name() << std::endl;
    return 0;
}
