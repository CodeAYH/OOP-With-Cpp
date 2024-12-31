#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    cout << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << a << "  " << b << endl;
}

int main()
{
    int a = 5;
    int b = 10;
    cout << a << " dd" << b << endl;

    Swap(a, b);
    cout << a << " dd" << b << endl;
}