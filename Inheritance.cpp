#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
public:
    string brand;

    void SetBrand(string b)
    {
        brand = b;
    }

    void displayBrand()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle
{
public:
    string model;

    void setModel(string m)
    {
        model = m;
    }

    void displayInfo()
    {
        displayBrand();
        cout << "Model: " << model << endl;
    }
};

int main()
{
    Car car;
    car.SetBrand("Toyota");
    car.setModel("Corolla");

    car.displayInfo();
    return 0;
}