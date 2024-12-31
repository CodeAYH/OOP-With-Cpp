#include "AdativeCruiseModeling.h"

void BreakSystem::PusingBreak(Accelerator &acceleratorObj)
{
    acceleratorObj.ReduceOutput();
}

void Accelerator::ReduceOutput()
{
    MyEngine.ReduceOutput();
}

void CruiseController::DoCruise()
{
    int range = dummy, currentSpeed = dummy;
    keepCruise = true;

    while (keepCruise)
    {
        range = mySensor.InquiringRange();
        currentSpeed = mySensor.InquiringCurrentSpeed();
        AccelerationAdjusting(CalculatingFitSpeed(range, currentSpeed), userTargetSpeed);
#ifdef _WIN32
        Sleep(accleerationAdjustingPeriod);
#else
        Sleep(accleerationAdjustingPeriod / 1000);
#endif
        keepCruise = false;
    }
}

void CruiseController::AccelerationAdjusting(int currentSpeed, int targetSpeed)
{
    if (targetSpeed == currentSpeed)
        return;

    if (targetSpeed > currentSpeed)
    {
        myAccelerator.AccelerationOutput();
        return;
    }
    myBreakSystem.PusingBreak(myAccelerator);
}

void Car::Stop()
{
    myBreakSystem.PusingBreak(myAccelerator);
}

void Car::DoCruise()
{
    myCruiseController.SetTargetSpeed(100);
    myCruiseController.DoCruise();
}
