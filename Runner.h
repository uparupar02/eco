#pragma once
#include "Motor.h"


using namespace ev3api;
class Runner{
    private:
     int course;pus
     Motor* leftMotor;
     Motor* rightMotor;
    public:
     void run();
     void switchCourse();
     int detectObstacle();
};