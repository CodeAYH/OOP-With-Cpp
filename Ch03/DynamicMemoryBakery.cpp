#include <iostream>
#include <string>
using namespace std;

int main()
{
    int customer = 0;

    cin >> customer;

    string *bread = new string[customer];

    for (int i = 0; i < customer; i++)
    {
        bread[i] = "빵_" + to_string(i);
    }

    cout << endl
         << "--생산된 빵--" << endl;
    for (int i = 0; i < customer; i++)
    {
        cout << *(bread + i) << endl;
    }
    delete[] bread;

    return 0;
}