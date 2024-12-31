#include <iostream>
using namespace std;

int main()
{
    try
    {
        int input;
        cout << "정수 입력";
        cin >> input;
        if (input > 0)
        {
            cout << "THrow 1" << endl;
            throw 1;
            cout << "after throw 1" << endl;
        }

        if (input < 0)
        {
            cout << "throw -1.0f" << endl;
            throw -1.0f;
            cout << "after throw -1.0f" << endl;
        }

        if (input == 0)
        {
            cout << "Throw Z" << endl;
            throw 'Z';
            cout << "after Throw Z" << endl;
        }
    }
    catch (int a)
    {
        cout << "Catch " << a << endl;
    }
    catch (float b)
    {
        cout << "Catch " << b << endl;
    }
    catch (char c)
    {
        cout << "Chatc " << c << endl;
    }
}