#include<iostream>
#include<fstream>
#include<cassert>
#include<cmath>

int main(int argc, char* argv[]){
    double x, y_next, y_pre, step, yprecise;
    int node;

    node = atoi(argv[1]);
    y_pre = 1.0;
    assert(node > 1);
    std::ofstream inputFile("exe3_3_output.dat");
    inputFile.setf(std::ios::scientific);
    inputFile.setf(std::ios::showpos);
    inputFile.precision(4);
    inputFile << "x\ty\tprecise_y\tdifference" << std::endl;
    step = 1.0 / node;
    for (int i = 0; i < node ; i++){
        if (i == 0){
            inputFile << 0.0 << "\t" << y_pre << "\t" << 1.0 << "\t" << 0.0
            << std::endl;
        }
        else{
            y_next = y_pre * (1.0/(1.0 + step));
            x = double(i) * step;
            yprecise = exp(-x);
            inputFile << x << "\t" << y_next << "\t" << yprecise << "\t"
            << yprecise - y_next<< std::endl;
            y_pre = y_next;
        }
    }
    inputFile.close();

    return 0;
}
