#include <iostream>
#include <string>

class Car
{
public:
    std::string color;
    std::string model;
    std::string manufaacture;

    void drive()
    {
        std::cout << "차가 운전 중입니다." << std::endl;
    }

    void stop()
    {
        std::cout << "차가 정지했습니다" << std::endl;
    }
};

int main()
{
    Car myCar;
    myCar.color = "Red";
    myCar.model = "Sedan";
    myCar.manufaacture = "Hyundai";

    myCar.drive();
    myCar.stop();

    return 0;
}