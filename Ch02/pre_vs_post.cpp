#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int a_prefix;
    int b_posfix;

    a_prefix = ++a;
    b_posfix = b++;

    cout << a_prefix << endl;
    cout << b_posfix << endl;
}