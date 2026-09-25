#ifndef PID_H_
#define PID_H_

class PID {
    private: // Private variables for PID class
        double prev_time;
        double dt;
        double max;
        double min;
        double kP;
        double kI;
        double kD;
        double P;
        double I;
        double D;
        double prev_error;
    public: // Public function deffinitions for PID class
        PID(double maximun, double minimum, double kProportional, double kIntegral, double kDerivative);
        double calculate(double sp, double pv, double PID_timer);
        // Functions below return the current kP, kI, kD and dt variables.
        double get_kP();
        double get_kI();
        double get_kD();
        double get_dT();
        // Functions below allow setting custom values to variables kP, kI and kD.
        void set_kP(double new_kP);
        void set_kI(double new_kI);
        void set_kD(double new_kD);
        ~PID(); // Unused PID class deconstructor.
};

#endif