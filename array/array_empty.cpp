#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 0> first;
    array<int, 5> second;

    cout << (first.empty() ? "is emppty" : "is not empty") << endl;
    cout << (second.empty() ? "is empty" : "is not empty") << endl;
    return 0;
}