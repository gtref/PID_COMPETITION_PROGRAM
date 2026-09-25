#ifndef ROBOT_VARIABLES_H
#define ROBOT_VARIABLES_H

#include "vex.h"
#include "PID/pid.h"

using namespace vex;

extern competition Competition;
extern brain Brain;
extern controller Controller1;
extern bool RemoteControlCodeEnabled;


// Global instances of user defined variables
extern bool red_alliance;
extern bool blue_alliance;

extern int32_t axis3;
extern int32_t axis4;
extern int32_t axis1;
extern int32_t axis2;

extern bool Up;
extern bool Down;
extern bool Left;
extern bool Right;
extern bool X;
extern bool B;
extern bool A;
extern bool Y;
extern bool L1;
extern bool L2;
extern bool R1;
extern bool R2;

extern double joystick_magnitude_left;
extern double joystick_magnitude_right;
extern double joystick_angle_left;
extern double joystick_angle_right;

extern int32_t axis4_percent_input;
extern int32_t axis3_percent_input;
extern int32_t axis1_percent_input;
extern int32_t axis2_percent_input;

extern double axis4_rpm_input;
extern double axis3_rpm_input;
extern double axis1_rpm_input;
extern double axis2_rpm_input;

extern double LeftFrontDrive_percent_input;
extern double LeftBackDrive_percent_input;
extern double RightFrontDrive_percent_input;
extern double RightBackDrive_percent_input;

extern double LeftFrontDrive_rpm_input;
extern double LeftBackDrive_rpm_input;
extern double RightFrontDrive_rpm_input;
extern double RightBackDrive_rpm_input;

extern double LeftFrontDrive_voltage_output;
extern double LeftBackDrive_voltage_output;
extern double RightFrontDrive_voltage_output;
extern double RightBackDrive_voltage_output;

extern double LeftFrontDrive_current_output;
extern double LeftBackDrive_current_output;
extern double RightFrontDrive_current_output;
extern double RightBackDrive_current_output;

extern double LeftFrontDrive_power_output;
extern double LeftBackDrive_power_output;
extern double RightFrontDrive_power_output;
extern double RightBackDrive_power_output;

extern double LeftFrontDrive_temperature_output;
extern double LeftBackDrive_temperature_output;
extern double RightFrontDrive_temperature_output;
extern double RightBackDrive_temperature_output;

extern double LeftFrontDrive_torque_output;
extern double LeftBackDrive_torque_output;
extern double RightFrontDrive_torque_output;
extern double RightBackDrive_torque_output;

extern double LeftFrontDrive_efficiency_output;
extern double LeftBackDrive_efficiency_output;
extern double RightFrontDrive_efficiency_output;
extern double RightBackDrive_efficiency_output;

extern double LeftFrontDrive_position_output;
extern double LeftBackDrive_position_output;
extern double RightFrontDrive_position_output;
extern double RightBackDrive_position_output;

extern double LeftFrontDrive_percent_output;
extern double LeftBackDrive_percent_output;
extern double RightFrontDrive_percent_output;
extern double RightBackDrive_percent_output;

extern double LeftFrontDrive_percent;
extern double LeftBackDrive_percent;
extern double RightFrontDrive_percent;
extern double RightBackDrive_percent;

extern double LeftFrontDrive_rpm_output;
extern double LeftBackDrive_rpm_output;
extern double RightFrontDrive_rpm_output;
extern double RightBackDrive_rpm_output;

extern double LeftFrontDrive_angular_velocity_output;
extern double LeftBackDrive_angular_velocity_output;
extern double RightFrontDrive_angular_velocity_output;
extern double RightBackDrive_angular_velocity_output;

extern double LeftFrontDrive_linear_velocity_output;
extern double LeftBackDrive_linear_velocity_output;
extern double RightFrontDrive_linear_velocity_output;
extern double RightBackDrive_linear_velocity_output;

extern bool LeftFrontDrive_isDone_output;
extern bool LeftBackDrive_isDone_output;
extern bool RightFrontDrive_isDone_output;
extern bool RightBackDrive_isDone_output;

extern bool LeftFrontDrive_isSpinning_output;
extern bool LeftBackDrive_isSpinning_output;
extern bool RightFrontDrive_isSpinning_output;
extern bool RightBackDrive_isSpinning_output;

extern directionType LeftFrontDrive_direction_output;
extern directionType LeftBackDrive_direction_output;
extern directionType RightFrontDrive_direction_output;
extern directionType RightBackDrive_direction_output;

extern int32_t drive_cartridge_rpm;
extern int32_t deadzone;

extern double wheel_diameter; // 4 inches in meters
extern double wheel_radius;
extern double wheel_circumference;

extern bool PID_enabled;

extern double LeftFrontDrive_PID_values[3];
extern double LeftBackDrive_PID_values[3];
extern double RightFrontDrive_PID_values[3];
extern double RightBackDrive_PID_values[3];

extern int32_t value_select;

extern PID LeftFrontDrive_PID;
extern PID LeftBackDrive_PID;
extern PID RightFrontDrive_PID;
extern PID RightBackDrive_PID;

#endif