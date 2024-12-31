#include <iostream>
#include <cassert>

using namespace std;

void PrintNumber(int *PtInt)
{
    assert(PtInt != NULL);
    cout << *PtInt << endl;
}

int main()
{
    int a = 100;
    int *b = NULL;
    int *c = NULL;

    b = &a;
    PrintNumber(b);
    PrintNumber(c);
}