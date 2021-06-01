#include<iostream>

double CaculateScalarProduct(int size, double* a, double* b);

int main(int argc, char* argv[]){
    int n = 3;
    double* x = new double [n];
    double* y = new double [n];
    x[0] = 1.0;
    x[1] = 2.0;
    x[2] = 1.0;
    y[0] = 4.4;
    y[1] = 2.3;
    y[2] = 4.4;
    double scalar_product = CaculateScalarProduct(n, x, y);
    std::cout << "Scalar Product = " << scalar_product << std::endl;
    delete[] x;
    delete[] y;
    
    return 0;
    }
    
double CaculateScalarProduct(int size, double* a, double* b){
    double scalar_product = 0.0;
    for (int i = 0; i < size; i++){
        scalar_product += a[i] * b[i];
        }
     return scalar_product;
     }
