/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       ronan                                                     */
/*    Created:      9/25/2026, 4:43:43 PM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"
#include "drivetrain.h"
#include "PID/pid.h"
#include "vars.h"
#define _USE_MATH_DEFINES

using namespace vex;

void pre_auton(void);
void autonomous(void);
void usercontrol(void);

// define your global instances of motors and other devices here
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]                 [Type]        [Port(s)]
// LeftFrontDrive         motor         1
// LeftBackDrive          motor         2
// RightFrontDrive        motor         3
// RightBackDrive         motor         4
// Controller1            controller    primary
// ---- END VEXCODE CONFIGURED DEVICES ----

int main() {
    Brain.Timer.clear();

    competition::bStopAllTasksBetweenModes = false;

    // Set up callbacks for autonomous and driver control periods.
    Competition.autonomous(autonomous);
    Competition.drivercontrol(usercontrol);

    // Initializing Robot Configuration. DO NOT REMOVE!
    vexcodeInit();

    // Run the pre-autonomous function.
    pre_auton();

    // Prevent main from exiting with an infinite loop.
    while(true) {
        wait(100, msec);
    }

    return 0;
}

void vexcodeInit() {
    
}
