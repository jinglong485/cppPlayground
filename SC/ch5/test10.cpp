#include<iostream>
#include<cmath>

void CalculateRealAndImaginary(double r, double theta, double& real, double& imaginary);

int main(int argc, char* argv[]){
    double r = 3.23;
    double theta = 2.22;
    double x, y;
    CalculateRealAndImaginary(r, theta, x, y);
    std::cout << "Real part  = " << x << std::endl;
    std::cout << "Imaginary part = " << y << std::endl;

    return 0;
    }

void CalculateRealAndImaginary(double r, double theta, double& real, double& imaginary){
    real = r*cos(theta);
    imaginary = r*sin(theta);
    }
