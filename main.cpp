#include <iostream>
#include "models.h"

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
