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

int main()
{
    std::cout<<"Hello World!\n";

    IsItOn();

    std::cout<<Calcer(17)<<'\n';

    std::cout<<"Bye World!\n";

    return 0;
}
