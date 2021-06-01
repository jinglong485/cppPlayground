#include<iostream>

void Multiply(double scalar, double* u, double* v, int n);

void Multiply(double scalar, double** A, double** B, int n);

int main(int argc, char* argv[]){
    int n = 2;
    double* u = new double [n];
    double* v = new double [n];
    double** A = new double* [n];
    double** B = new double* [n];
    for(int i = 0; i < n; i++){
        A[i] = new double [n];
        B[i] = new double [n];
        }
    u[0] = -9.8;
    u[1] = 3.5;
    A[0][0] = 2.3;
    A[0][1] = 3.4;
    A[1][0] = 1.3;
    A[1][1] = 3.3;
    double s = 2.3, t = 4.5;
    Multiply(s, u, v, n);
    Multiply(t, A, B, n);
    delete[] u;
    delete[] v;
    for(int i = 0; i < n; i++){
        delete[] A[i];
        delete[] B[i];
        }
    delete[] A;
    delete[] B;

    return 0;
    }

void Multiply(double scalar, double* u, double* v, int n){
    for(int i = 0; i < n; i++){
        v[i] = scalar * u[i];
        }
    }

void Multiply(double scalar, double** A, double** B, int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            B[i][j] = scalar * A[i][j];
            }
        }
    }
