module;
#include <iostream>

export module mods;

export void MyFunc();

module :private;

void MyFunc()
{
    std::cout << "Mods" << std::endl;
}