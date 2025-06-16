#ifndef RUNGEKUTTASOLVERDEF
#define RUNGEKUTTASOLVERDEF

#include "AbstractOdeSolver.hpp"
#include <fstream>

class RungeKuttaSolver : public AbstractOdeSolver {
public:
    double RightHandSide(double y, double t) override {
        return 1 + t;  // Specific RHS function for testing
    }
    
    double SolveEquation() override;
};

#endif
