#include <iostream>
using namespace std;

int average(int array[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += array[i];
    }
    return (sum / count);
}

int main()
{
    int scores[5] = {1, 2, 3, 4, 5};
    cout << average(scores, 5) << endl;
}