#include<cmath>
#include<iostream>

double differenceOfTwoFunction(double (*pFunc)(double), double (*pFuncToo)(double), double x){
    return (*pFunc) (x) - (*pFuncToo)(x);
}

double reciprocal(double x){
    return 1/x;
}

double square(double x){
    return x*x;
}

int main(int argc, char* argv[]){
    double num = 1.2;
    //it seems w/ or w/o & for function is the same.
    std::cout << differenceOfTwoFunction(&reciprocal, &square, num) << std::endl;
    std::cout << differenceOfTwoFunction(square, reciprocal, num) << std::endl;
    
    return 0;
}
