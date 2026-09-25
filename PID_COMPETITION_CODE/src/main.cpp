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

int main(void) {
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

void vexcodeInit(void) {
    waitUntil(Brain.Screen.pressing());

    initrs();
    Brain.Timer.clear();
    Brain.Screen.print("Device initialization...");
    Brain.Screen.setCursor(2, 1);
    wait(1000, msec);

    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    Brain.Screen.setFillColor(red);
    Brain.Screen.drawRectangle(0, 0, 240, 240);
    Brain.Screen.setFillColor(blue);
    Brain.Screen.drawRectangle(240, 0, 240, 240);
    Brain.Screen.setFillColor(transparent);
    waitUntil(Brain.Screen.pressing());

     if ((Brain.Screen.xPosition() >= 0 && Brain.Screen.xPosition() <= 239) && (Brain.Screen.yPosition() >= 0 && Brain.Screen.yPosition() <= 239)) {
        red_alliance = true;
        blue_alliance = false;
    }
    else {
        red_alliance = false;
        blue_alliance = true;
    }
    Brain.Screen.clearScreen();
    Brain.Screen.setFillColor(transparent);
    wait(1000, msec);

    if (red_alliance) {
        Brain.Screen.print("Red Alliance selected...");
    }
    else {
        Brain.Screen.print("Blue Alliance selected...");
    }
     wait(1000, msec);
    
    // Calibrate the drivetrain Inertial before starting
    Brain.Screen.clearScreen();
    Brain.Screen.setCursor(1, 1);
    wait(50, msec);
}

void initrs(void) {
    int systemTime = Brain.Timer.systemHighResolution();
    double batteryCurrent = Brain.Battery.current();
    double batteryVoltage = Brain.Battery.voltage(voltageUnits::mV);

    // Combine these values into a single integer
    int seed = int(batteryVoltage + batteryCurrent * 100) + systemTime;

    // Set the seed
    srand(seed);
}

// Helper to make playing sounds from the V5 in VEXcode easier and
// keeps the code cleaner by making it clear what is happening.
void playVexcodeSound(const char *soundName) { // Direct copy from og source
  printf("VEXPlaySound:%s\n", soundName);
  wait(5, msec);
}