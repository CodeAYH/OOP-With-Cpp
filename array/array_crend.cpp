#include <iostream>
#include <array>

int main()
{
    std::array<int, 6> myarray = {10, 20, 30, 40, 50, 60};
    std::cout << "myarray backwards: ";
    for (auto it = myarray.crbegin(); it < myarray.crend(); it++)
    {
        std::cout << ' ' << *it;
    }
    std::cout << '\n';
    return 0;
}