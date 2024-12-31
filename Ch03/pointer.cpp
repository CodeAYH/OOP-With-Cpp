#include <iostream>
using namespace std;

int main()
{
    char charValue = 'A';
    int intValue = 123;
    double doubleValue = 123.456;

    char *charPointerValue = &charValue;
    int *intPointerValue = &intValue;
    double *doublePointerValue = &doubleValue;

    cout << charValue << endl;
    cout << intValue << endl;
    cout << doubleValue << endl;
    cout << *charPointerValue << endl;
    cout << *intPointerValue << endl;
    cout << *doublePointerValue << endl;

    *charPointerValue = 'Z';
    *intPointerValue = 321;
    *doublePointerValue = 654.321;
    cout << charValue << endl;
    cout << intValue << endl;
    cout << doubleValue << endl;
}