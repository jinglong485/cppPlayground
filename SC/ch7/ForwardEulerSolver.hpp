#include"AbstractOdeSolver.hpp"

class ForwardEulerSolver : public AbstractOdeSolver{
    public:
        double (*p_function) (double y, double t);
        double RightHandSide(double y, double t);
        double SolveEquation();
};
