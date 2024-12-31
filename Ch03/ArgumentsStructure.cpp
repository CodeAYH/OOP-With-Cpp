#include <iostream>
using namespace std;

struct Person
{
    std::string name;
    int age;
    float height;
    float weight;
};

void CheckAge(Person *adult, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (adult[i].age >= 25)
        {
            cout << adult[i].name << endl;
            cout << adult[i].age << endl;
            cout << adult[i].height << endl;
            cout << adult[i].weight << endl;
        }
    }
}

int main()
{
    Person adult[3] =
        {
            {"brain", 24, 180, 70},
            {"Jessica", 22, 165, 55},
            {"James", 30, 170, 65},
        };

    CheckAge(adult, 3);
    return 0;
}