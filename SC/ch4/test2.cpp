#include<iostream>

int main(int argc, char* argv[]){

    double* x;
    x = new double [20];
    std::cout << x << std::endl;
    std::cout << &x[0] << std::endl;
    for (int i = 0; i < 20; i++){
        std::cout << &x[i] << std::endl;
        }
    return 0;
    }
