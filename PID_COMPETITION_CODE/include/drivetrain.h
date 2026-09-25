#ifndef DRIVETRAIN_H_
#define DRIVETRAIN_H_

#include "vex.h"

using namespace vex;

// VEXcode Motor devices
extern motor LeftFrontDrive;
extern motor LeftBackDrive;
extern motor RightFrontDrive;
extern motor RightBackDrive;
extern motor_group LeftDrive;
extern motor_group RightDrive;

int motor_track();

#endif // DRIVETRAIN_H_