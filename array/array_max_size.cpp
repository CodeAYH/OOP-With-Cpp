#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> myarray;
    std::cout << myarray.size() << std::endl;
    std::cout << myarray.max_size() << std::endl;

    return 0;
}