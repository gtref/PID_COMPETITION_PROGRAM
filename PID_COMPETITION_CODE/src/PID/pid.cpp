#include "PID/pid.h"


PID::PID(double maximun, double minimum, double kProportional, double kIntegral, double kDerivative) {
    prev_time = 0;
    dt = 0;
    max = maximun;
    min = minimum;
    kP = kProportional;
    kI = kIntegral;
    kD = kDerivative;
};

double PID::calculate(double sp, double pv, double PID_timer) { // Function to calculate the PID
    double err;
    double PIDOUT;

    if (kP == 0 && kI == 0 && kD == 0) {
        PIDOUT = sp;
    } else {
        err = sp - pv;
        P = err;

        dt = PID_timer - prev_time;
        prev_time = PID_timer;

        if (err >= min && err <= max) {
            if (err == 0) {
                I = 0;
            }
        } else {
            if (err > max) {
                err = max;
                P = max;
            } if (err < min) {
                err = min;
                P = min;
            }
        }
        I += (err * dt);
        PIDOUT = (P * kP) + (I * kI) + (D * kD);

        if (PIDOUT > max) {
            PIDOUT = max;
        } if (PIDOUT < min) {
            PIDOUT = min;
        }
    }
    return PIDOUT;
}

double PID::get_kP() {
    return kP;
}

double PID::get_kI() {
    return kI;
}

double PID::get_kD() {
    return kP;
}

double PID::get_dT() {
    return dt;
}

void PID::set_kP(double new_kP) {
    kP = new_kP;
}

void PID::set_kI(double new_kI) {
    kI = new_kI;
}

void PID::set_kD(double new_kD) {
    kD = new_kD;
}

PID::~PID() {
    // NOTHING.
}