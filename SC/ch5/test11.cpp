#include<cmath>
#include<iostream>

void CalculateCubeRoot(double& x, double& K, double toleran = 1.0e-6, int maxIterations = 100);

int main(int argc, char* argv[]){
    double x = 1.0;
    double K = 12.0;

    CalculateCubeRoot(x, K);
    std::cout << "x = "<< x << std::endl;
    double tolerance = 0.001;
    x = 1.0;
    CalculateCubeRoot(x, K, tolerance);
    std::cout << "x = " << x << std::endl;
    int maxIterations = 50;
    x = 1.0;
    CalculateCubeRoot(x, K, tolerance, maxIterations);
    std::cout << "x = " << x << std::endl;
    return 0;
    }

void CalculateCubeRoot(double& x, double& K, double tolerance, int maxIterations){
    int iterations = 0;
    double residual = x*x*x-K;
    while(fabs(residual) > tolerance && (iterations < maxIterations)){
        x = x-(x*x*x-K)/(3.0*x*x);
        residual = x*x*x - K;
        iterations++;
        }
    }
