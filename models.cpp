#include <iostream>
#include "models.h"

void IsItOn()
{
    std::cout<<"Yes its on!\n";
}

int Calcer(const int cycles)
{
    int sum{};
    for(int i{}; i<cycles; ++i)
    {
        sum += i;
    }
    return sum;
}

void Greet()
{
    std::cout<<"Hello World!\n";
}

void Goodbye()
{
    std::cout<<"Bye World!\n";
}

