#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 6> ma;
    ma.fill(5);
    cout << "myarray contains: ";
    for (int &x : ma)
    {
        cout << ' ' << x;
    }
    cout << 'n';
    return 0;
}