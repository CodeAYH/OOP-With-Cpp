#include <iostream>
using namespace std;

void Fun()
{
    int a = 10;
    static int b = 10;
    a++;
    b++;

    cout << a << "  '" << b << endl;
}

int GetNewID()
{
    static int ID = 0;
    return ++ID;
}
int main()
{
    Fun();
    Fun();
    Fun();
    Fun();
    Fun();
    Fun();

    cout << GetNewID() << endl;
    cout << GetNewID() << endl;
    cout << GetNewID() << endl;
    cout << GetNewID() << endl;
    cout << GetNewID() << endl;
    cout << GetNewID() << endl;
}