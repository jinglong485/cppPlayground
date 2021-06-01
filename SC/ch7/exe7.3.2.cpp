#include"ForwardEulerSolver.hpp"

double myFunction(double y, double t);

int main(int argc, char* argv[]){
    ForwardEulerSolver A;
    A.p_function = &myFunction;
    A.SetTimeInterval(0,1);
    A.SetInitialValue(2);
    A.SetStepSize(0.01);
    A.SolveEquation();

    return 0;
}

double myFunction(double y, double t){
    return 1+t;
}
