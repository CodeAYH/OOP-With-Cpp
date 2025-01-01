#include <iostream>
using namespace std;

class Bank
{
private:
    int safe;

public:
    Bank();
    void UseCounter(int in, int out);
};

Bank::Bank()
{
    safe = 1000;
    cout << "최초 금고 : " << safe << endl;
    cout << endl;
}

void Bank::UseCounter(int in, int out)
{
    safe += in;
    safe -= out;
}
