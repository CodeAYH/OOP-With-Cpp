#include <iostream>
#include <stdlib.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>

using namespace std;

class Accelerator;
const int dummy = 0;

class Engine
{
private:
    virtual void AccelerationOutput() = 0;
    virtual void ReduceOutput() = 0;
    friend class Accelerator;
};

class IcEngine : public Engine
{
private:
    virtual void AccelerationOutput() = 0;
    virtual void ReduceOutput() = 0;
};

class GsEngine : public IcEngine
{
private:
    void AccelerationOutput() override { IncreasingFuel(); };
    void ReduceOutput() override { DecreasingFuel(); };
    void IncreasingFuel() { IncreasingPistonSpeed(); };
    void DecreasingFuel() { DecreasingPistonSpeed(); };
    void IncreasingPistonSpeed() { cout << "IncreasingPistonSpeed" << endl; };
    void DecreasingPistonSpeed() { cout << "DecreasingPistonSpeed" << endl; };
};

class ElecEngine : public Engine
{
private:
    void AccelerationOutput() override { IncreasingMotorSpeed(); };
    void ReduceOutput() override { DecreasingMotorSpeed(); };
    void IncreasingMotorSpeed() { cout << "IncreasingMotorSpeed" << endl; };
    void DecreasingMotorSpeed() { cout << "DecreasingMotorSpeed" << endl; };
};

class BreakSystem
{
public:
    void PusingBreak(Accelerator &acceleratorObj);
};

class Accelerator
{
public:
    Accelerator(Engine &engine) : MyEngine(engine) {};
    void AccelerationOutput() { MyEngine.AccelerationOutput() };
    void SetEngine(Engine &engine) { MyEngine = engine; };

private:
    Engine &MyEngine;
    void ReduceOutput();
    friend void BreakSystem::PusingBreak(Accelerator &acceleratorObj);
};

class Sensor
{
public:
    int InquiringRange() { return dummy; };
    int InquiringCurrentSpeed() { return dummy; };
};

class CruiseController
{
public:
    CruiseController(Sensor &sensor, Accelerator &accelerator, BreakSystem &breakSystem)
        : mySensor(sensor), myAccelerator(accelerator), myBreakSystem(breakSystem)
    {
        accleerationAdjustingPeriod = 1;
        userTargetSpeed = 0;
        keepCruise = false;
    };

    void DoCruise();
    void StopCruise() { keepCruise = false; };
    void SetTargetSpeed(int speed) { userTargetSpeed = speed; };

private:
    int CalculatingFitSpeed(int range, int originalTargetSpeed) { return dummy; };
    void AccelerationAdjusting(int targetSpee, int currentSpeed);

    Sensor &mySensor;
    Accelerator &myAccelerator;
    BreakSystem &myBreakSystem;

    int userTargetSpeed;
    int accleerationAdjustingPeriod;
    bool keepCruise;
};

class Car
{
public:
    Car(Engine &engine, Sensor &sensor, BreakSystem &breakSystem, Accelerator &accelerator, CruiseController &cruiseController)
        : myEngine(engine), mySensor(sensor), myBreakSystem(breakSystem), myAccelerator(accelerator), myCruiseController(cruiseController) {};
    void DoCruise();
    void Stop();

private:
    Engine &myEngine;
    Sensor &mySensor;
    BreakSystem &myBreakSystem;
    Accelerator &myAccelerator;
    CruiseController &myCruiseController;
};
