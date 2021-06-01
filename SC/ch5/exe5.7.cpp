#include<iostream>
#include<cmath>

double pNormal(double* vtr, int n, int p = 2);

int main(int argc, char* argv[]){
    int p, n;
    double* vctr;
    std::cout << "Dimension of a vector: ";
    std::cin >> n;
    std::cout << "Input the p of p-normal: ";
    std::cin >> p;
    std::cout << std::endl;
    vctr = new double[n];
    for(int i = 0; i < n; i++){
        vctr[i] = ((double)i) * ((double)i) + 144.0;
    }
    std::cout << "The vector is :[";
    for(int i = 0; i < n; i++){
        std::cout << vctr[i] << " ";
    }
    std::cout << "]" << std::endl;
    std::cout << "The p-normal of vector is: " << pNormal(vctr, n, p) << std::endl;
    return 0;
}

double pNormal(double* vtr, int n, int p){
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += pow(fabs(vtr[i]), (double)p);
    }
    return pow(sum, 1/((double)p));
}
