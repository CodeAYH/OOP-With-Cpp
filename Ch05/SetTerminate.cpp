#include <iostream>
#include <cstdlib>

using namespace std;

void MyTerminate()
{
    cout << "MyTerminate" << endl;
    exit(-1);
}

int main()
{
    set_terminate(MyTerminate);
    throw 1;

    return 0;
}