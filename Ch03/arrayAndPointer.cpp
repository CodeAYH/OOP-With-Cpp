#include <iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *pointerarray = array;
    cout << array << endl;
    cout << pointerarray << endl;

    cout << sizeof(array) << endl;
    cout << sizeof(pointerarray) << endl;
}