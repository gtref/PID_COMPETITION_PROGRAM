#include "drivetrain.h"
#include "vars.h"

using namespace vex;

// VEXcode Motor device constructors
motor LeftFrontDrive = motor(PORT1, ratio18_1, false);
motor LeftBackDrive = motor(PORT2, ratio18_1, false);
motor RightFrontDrive = motor(PORT3, ratio18_1, true);
motor RightBackDrive = motor(PORT4, ratio18_1, true);

int track_motor() {
    while(Competition.isEnabled()) {
        // Track motor voltage.
        LeftFrontDrive_voltage_output = LeftFrontDrive.voltage(volt);
        LeftBackDrive_voltage_output = LeftBackDrive.voltage(volt);
        RightFrontDrive_voltage_output = RightFrontDrive.voltage(volt);
        RightBackDrive_voltage_output = RightBackDrive.voltage(volt);

        // Track motor current
        LeftFrontDrive_current_output = LeftFrontDrive.current(amp);
        LeftBackDrive_current_output = LeftBackDrive.current(amp);
        RightFrontDrive_current_output = RightFrontDrive.current(amp);
        RightBackDrive_current_output = RightBackDrive.current(amp);

        // Track motor power
        LeftFrontDrive_power_output = LeftFrontDrive.power(watt);
        LeftBackDrive_power_output = LeftBackDrive.power(watt);
        RightFrontDrive_power_output = RightFrontDrive.power(watt);
        RightBackDrive_power_output = RightBackDrive.power(watt);

        // Track motor temperature in Degrees C
        LeftFrontDrive_temperature_output = LeftFrontDrive.temperature(celsius);
        LeftBackDrive_temperature_output = LeftBackDrive.temperature(celsius);
        RightFrontDrive_temperature_output = RightFrontDrive.temperature(celsius);
        RightBackDrive_temperature_output = RightBackDrive.temperature(celsius);

        // Track motor torque
        LeftFrontDrive_torque_output = LeftFrontDrive.torque(Nm);
        LeftBackDrive_torque_output = LeftBackDrive.torque(Nm);
        RightFrontDrive_torque_output = RightFrontDrive.torque(Nm);
        RightBackDrive_torque_output = RightBackDrive.torque(Nm);

        // Track motor efficency
        LeftFrontDrive_efficiency_output = LeftFrontDrive.efficiency(percent);
        LeftBackDrive_efficiency_output = LeftBackDrive.efficiency(percent);
        RightFrontDrive_efficiency_output = RightFrontDrive.efficiency(percent);
        RightBackDrive_efficiency_output = RightBackDrive.efficiency(percent);

        // Track the position and velocity of the driver motors.
        LeftFrontDrive_position_output = LeftFrontDrive.position(degrees);
        LeftBackDrive_position_output = LeftBackDrive.position(degrees);
        RightFrontDrive_position_output = RightFrontDrive.position(degrees);
        RightBackDrive_position_output = RightBackDrive.position(degrees);

        LeftFrontDrive_percent_output = LeftFrontDrive.velocity(percent);
        LeftBackDrive_percent_output = LeftBackDrive.velocity(percent);
        RightFrontDrive_percent_output = RightFrontDrive.velocity(percent);
        RightBackDrive_percent_output = RightBackDrive.velocity(percent);

        LeftFrontDrive_rpm_output = LeftFrontDrive.velocity(rpm);
        LeftBackDrive_rpm_output = LeftBackDrive.velocity(rpm);
        RightFrontDrive_rpm_output = RightFrontDrive.velocity(rpm);
        RightBackDrive_rpm_output = RightBackDrive.velocity(rpm);

         // Convert rpm to radians per second
        LeftFrontDrive_angular_velocity_output = LeftFrontDrive.velocity(rpm) * 2 * M_PI / 60.0; 
        LeftBackDrive_angular_velocity_output = LeftBackDrive.velocity(rpm) * 2 * M_PI / 60.0;
        RightFrontDrive_angular_velocity_output = RightFrontDrive.velocity(rpm) * 2 * M_PI / 60.0;
        RightBackDrive_angular_velocity_output = RightBackDrive.velocity(rpm) * 2 * M_PI / 60.0;

        // Convert rpm to linear velocity in millimeters per second.
        LeftFrontDrive_linear_velocity_output = LeftFrontDrive_angular_velocity_output * wheel_radius * 1000.0;
        LeftBackDrive_linear_velocity_output = LeftBackDrive_angular_velocity_output * wheel_radius * 1000.0;
        RightFrontDrive_linear_velocity_output = RightFrontDrive_angular_velocity_output * wheel_radius * 1000.0;
        RightBackDrive_linear_velocity_output = RightBackDrive_angular_velocity_output * wheel_radius * 1000.0;

        // Track if the drive motors are spinning and in which direction.
        LeftFrontDrive_isDone_output = LeftFrontDrive.isDone();
        LeftBackDrive_isDone_output = LeftBackDrive.isDone();
        RightFrontDrive_isDone_output = RightFrontDrive.isDone();
        RightBackDrive_isDone_output = RightBackDrive.isDone();

        LeftFrontDrive_isSpinning_output = LeftFrontDrive.isSpinning();
        LeftBackDrive_isSpinning_output = LeftBackDrive.isSpinning();
        RightFrontDrive_isSpinning_output = RightFrontDrive.isSpinning();
        RightBackDrive_isSpinning_output = RightBackDrive.isSpinning();

        LeftFrontDrive_direction_output = LeftFrontDrive.direction();
        LeftBackDrive_direction_output = LeftBackDrive.direction();
        RightFrontDrive_direction_output = RightFrontDrive.direction();
        RightBackDrive_direction_output = RightBackDrive.direction();

        this_thread::sleep_for(10); // Sleep the thread for a short amount of time to
         // prevent wasted resources.
    }
    return 0;
}