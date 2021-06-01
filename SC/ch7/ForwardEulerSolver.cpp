#include"ForwardEulerSolver.hpp"
#include<fstream>
#include<iostream>
#include<cassert>

double ForwardEulerSolver::RightHandSide(double y, double t){
    return y + stepSize * p_function(y, t);
}

double ForwardEulerSolver::SolveEquation(){
    std::ofstream writeOutput("result.txt");
    assert(writeOutput.is_open());
    int N = 0;
    N = (int) (finalTime - initialTime)/stepSize;
    double y = initialValue;
    double y1;
    writeOutput << initialTime<< " " << initialValue << std::endl;
    for(int i = 1; i < N; i++){
    	y1 = RightHandSide(y, initialTime + (double)(i-1) * stepSize);
        writeOutput << initialTime + (double)i * stepSize << " " << y1 \
        	<< std::endl;
        y = y1;
    }
    writeOutput.close();
    return 10;
}
