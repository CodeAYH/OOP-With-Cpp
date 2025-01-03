#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> myarray;
    unsigned int i;

    for (int i = 0; i < 10; i++)
    {
        myarray[i] = i;
    }
    std::cout << "myarray contains: ";
    for (i = 0; i < 10; i++)
    {
        std::cout << ' ' << myarray[i];
    }
    std::cout << '\n';

    return 0;
}