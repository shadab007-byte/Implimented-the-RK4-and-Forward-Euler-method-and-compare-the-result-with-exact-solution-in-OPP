#include "ForwardEulerSolver.hpp"
#include "RungeKuttaSolver.hpp"
#include <iostream>

int main() {
    double stepSize = 0.1;  // Example step size
    ForwardEulerSolver eulerSolver;
    RungeKuttaSolver rkSolver;

    eulerSolver.SetStepSize(stepSize);
    eulerSolver.SetTimeInterval(0.0, 1.0);
    eulerSolver.SetInitialValue(2.0);
    eulerSolver.SolveEquation();

    rkSolver.SetStepSize(stepSize);
    rkSolver.SetTimeInterval(0.0, 1.0);
    rkSolver.SetInitialValue(2.0);
    rkSolver.SolveEquation();

    std::cout << "Solutions written to files.\n";
    return 0;
}
