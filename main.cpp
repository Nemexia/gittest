#include <iostream>

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

    std::cout<<Calcer(17)<<'\n';

    return 0;
}
