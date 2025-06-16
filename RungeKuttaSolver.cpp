#include "RungeKuttaSolver.hpp"
#include <iostream>
#include <fstream>

double RungeKuttaSolver::SolveEquation() {
    std::ofstream file("RungeKuttaSolution.txt");
    double y = initialValue;
    double t = initialTime;
    
    file << t << " " << y << "\n";
    
    while (t < finalTime) {
        double k1 = stepSize * RightHandSide(y, t);
        double k2 = stepSize * RightHandSide(y + k1 / 2, t + stepSize / 2);
        double k3 = stepSize * RightHandSide(y + k2 / 2, t + stepSize / 2);
        double k4 = stepSize * RightHandSide(y + k3, t + stepSize);
        
        y += (1.0 / 6.0) * (k1 + 2 * k2 + 2 * k3 + k4);
        t += stepSize;
        file << t << " " << y << "\n";
    }
    
    file.close();
    return y;
}
