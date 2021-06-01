#include<iostream>
#include"MyVector.hpp"

int main(int argc, char* argv[]){
    MyVector<7> A;
    A[0] = 1;
    A[1] = 1 + 1e-6;
    A[2] = -1e-6;
    A[3] = 0.5;
    A[4] = 0;
    for(auto i = 0; i < 5; i++){
        std::cout << A[i] << std::endl;
    }

    return 0;
}
