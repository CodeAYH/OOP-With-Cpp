#include <iostream>
using namespace std;

int main()
{
    int lotto[45] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    cout << "Todays Lotto: "
         << lotto[0] << ", " << lotto[7] << ", " << lotto[22] << ", " << lotto[27] << ", " << lotto[36] << ", " << lotto[44] << endl;

    cout << endl;

    cout << &lotto[0] << endl;
    cout << &lotto[7] << endl;
    cout << &lotto[22] << endl;
    cout << &lotto[27] << endl;
    cout << &lotto[36] << endl;
    cout << &lotto[44] << endl;

    cout << lotto + 0 << endl;
    cout << lotto + 1 << endl;
}