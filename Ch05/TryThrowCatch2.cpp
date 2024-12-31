#include <iostream>
using namespace std;

void FuncThrow()
{
    cout << "FuncThrow()" << endl;
    cout << "Throw -1 " << endl;
    throw -1;
    cout << "after Throw -1" << endl;
}

int main()
{
    try
    {
        FuncThrow();
    }
    catch (int exec)
    {
        cout << "Catch " << exec << endl;
    }
}