#include <iostream>
#include <cstring>
#include <array>

int main()
{
    const char *cstr = "Test string";
    std::array<char, 12> arraycc;

    std::memcpy(arraycc.data(), cstr, 12);
    std::cout << arraycc.data() << std::endl;

    return 0;
}