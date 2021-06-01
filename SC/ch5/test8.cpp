#include<iostream>
#include<cmath>

void DoSomething(double* , double**);
void MakeMatrix(double** A, int j);
void FreeMatrix(double** A, int i);

int main(int argc, char* argv[]){
    double* u = new double [10];
    double** A = new double* [10];
    MakeMatrix(A, 10);
    DoSomething(u, A);
    std::cout << u[2] << std::endl;
    std::cout << A[2][3] << std::endl;

    delete[] u;
    FreeMatrix(A, 10);

    return 0;
    }

void DoSomething(double* u, double** A){
    u[2] = 1.0;
    A[2][3] = 4.0;
    }

void MakeMatrix(double** A, int j){
    for(int x = 0; x < 10; x++){
        A[x] = new double[j];
        }
    }

void FreeMatrix(double** A, int i){
    for(int j = 0; j < i; j++){
        delete[] A[j];
        }
    }
