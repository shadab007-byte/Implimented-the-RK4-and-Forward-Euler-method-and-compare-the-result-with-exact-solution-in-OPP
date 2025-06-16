#include "AbstractOdeSolver.hpp"

// Set the step size
void AbstractOdeSolver::SetStepSize(double h) {
    stepSize = h;
}

// Set the time interval [t0, t1]
void AbstractOdeSolver::SetTimeInterval(double t0, double t1) {
    initialTime = t0;
    finalTime = t1;
}

// Set the initial value y0
void AbstractOdeSolver::SetInitialValue(double y0) {
    initialValue = y0;
}
