#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int a = 13;
    int b = 27;
    int c = a & b;

    cout << bitset<8>(a) << " : " << a << endl;
    cout << bitset<8>(b) << " : " << b << endl;
    cout << bitset<8>(c) << " : " << c << endl;

    return 0;
}