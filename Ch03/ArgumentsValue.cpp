#include <iostream>

using namespace std;

void ChangeNegative(int *_val)
{
    if (*_val > 0)
    {
        *_val = -*_val;
    }
}

int main()
{
    int a = 3, b = -3;

    ChangeNegative(&a);
    ChangeNegative(&b);

    cout << a << "  " << b << endl;
}