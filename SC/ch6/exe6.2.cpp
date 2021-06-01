#include"MatrixClass.hpp"
#include<iostream>

int main(int argc, char* argv[]){
    MyMatrix A(2, 4, 5, 6);
    MyMatrix B(A);
    MyMatrix C(0.5,0.5,1,2);
    MyMatrix IC;
    A.ShowMatrix();
    std::cout << std::endl;
    B.ShowMatrix();
    std::cout << std::endl;
    C.ShowMatrix();
    std::cout << std::endl;
    IC = C.InverseMatrix();
    IC.ShowMatrix();
    std::cout << std::endl;
    A = C + IC;
    A.ShowMatrix();
    std::cout << std::endl;
    A.ScalarMultiply(77);
    A.ShowMatrix();
    std::cout << std::endl;
    B = C - IC;
    B.ShowMatrix();
    std::cout << std::endl;

    return 0;
}
