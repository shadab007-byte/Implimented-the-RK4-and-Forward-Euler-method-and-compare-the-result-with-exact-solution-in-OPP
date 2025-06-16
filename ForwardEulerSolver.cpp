#include "ForwardEulerSolver.hpp"
#include <iostream>  // Include this for std::cerr
#include <fstream>

double ForwardEulerSolver::RightHandSide(double y, double t) {
    (void)y; // Suppress unused parameter warning
    return 1 + t;  // Specific RHS function for testing
}

double ForwardEulerSolver::SolveEquation() {
    std::ofstream file("ForwardEulerSolution.txt");
    if (!file) {
        std::cerr << "Error: Could not open file for writing.\n";
        return -1; // Return an error value
    }

    double y = initialValue;
    double t = initialTime;
    
    file << t << " " << y << "\n";  // Write initial values
    
    while (t < finalTime) {
        y += stepSize * RightHandSide(y, t); // Update y using Forward Euler method
        t += stepSize;
        file << t << " " << y << "\n";  // Write updated values to file
    }

    file.close();
    return y;
}
