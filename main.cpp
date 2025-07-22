#include <iostream>
#include "models.h"

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

int main()
{
    Greet();

    IsItOn();

    std::cout<<Calcer(17)<<'\n';

    for(int i{}; i<100; ++i)
    {
        std::cout<<i<<'\n';
    }

    Goodbye();

    return 0;
}
