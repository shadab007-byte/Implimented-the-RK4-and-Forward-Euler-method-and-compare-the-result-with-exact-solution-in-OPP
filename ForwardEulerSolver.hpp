#ifndef FORWARDEULERSOLVERDEF
#define FORWARDEULERSOLVERDEF

#include "AbstractOdeSolver.hpp"
#include <fstream>

class ForwardEulerSolver : public AbstractOdeSolver {
public:
    double RightHandSide(double y, double t) override;
    double SolveEquation() override;
};

#endif
