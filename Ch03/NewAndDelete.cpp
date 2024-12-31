#include <iostream>
using namespace std;

int main()
{
    int *ptIntValue = new int;

    *ptIntValue = 100;
    cout << *ptIntValue << endl;

    delete ptIntValue;

    int *PtArray = new int[5];

    for (int i = 0; i < 5; i++)
    {
        PtArray[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << PtArray[i] << endl;
    }

    delete[] PtArray;
    return 0;
}