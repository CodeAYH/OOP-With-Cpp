
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout << "The animal" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "This dog" << endl;
    }
};

int main()
{
    Animal *animal = new Animal();
    Animal *dog = new Dog();

    animal->makeSound();
    dog->makeSound();

    delete animal;
    delete dog;

    return 0;
}