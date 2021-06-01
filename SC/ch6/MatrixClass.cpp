#include"MatrixClass.hpp"
#include<iostream>

MyMatrix::MyMatrix(){
    mMatrix = new double* [2];
    for(int i = 0; i < 2; i++){
        mMatrix[i] = new double [2];
        for(int j = 0; j < 2; j++){
            mMatrix[i][j] = 0.0;
        }
    }
}

MyMatrix::MyMatrix(MyMatrix& A){
    mMatrix = new double* [2];
    for(int i=0; i < 2; i++){
        mMatrix[i] = new double [2];
        for(int j = 0; j < 2; j++){
            mMatrix[i][j] = A.mMatrix[i][j];
        }
    }
}

MyMatrix::MyMatrix(double a, double b, double c, double d){
    mMatrix = new double* [2];
    for(int i = 0; i < 2; i++){
        mMatrix[i] = new double [2];
    }
    mMatrix[0][0] = a;
    mMatrix[0][1] = b;
    mMatrix[1][0] = c;
    mMatrix[1][1] = d;
}

double MyMatrix::Determinant() const{
    return mMatrix[0][0] * mMatrix[1][1] - mMatrix[0][1] * mMatrix[1][0];
}

MyMatrix MyMatrix::InverseMatrix() const{
    double det = Determinant();
    if(det != 0.0){
        MyMatrix IA(mMatrix[1][1]/det, -mMatrix[0][1]/det,
                -mMatrix[1][0]/det, mMatrix[0][0]/det);
        return IA;
    }
    //***
    else{
        std::cout << "Error!" << std::endl;
        MyMatrix IA;
        return IA;
    }
    //***/
}

void MyMatrix::ShowMatrix() const{
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            std::cout << mMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

MyMatrix& MyMatrix::operator=(const MyMatrix& B){
    mMatrix[0][0] = B.mMatrix[0][0];
    mMatrix[0][1] = B.mMatrix[0][1];
    mMatrix[1][0] = B.mMatrix[1][0];
    mMatrix[1][1] = B.mMatrix[1][1];

    return *this;
}

MyMatrix MyMatrix::operator+(const MyMatrix& B){
    MyMatrix A;
    A.mMatrix[0][0] = mMatrix[0][0] + B.mMatrix[0][0];
    A.mMatrix[0][1] = mMatrix[0][1] + B.mMatrix[0][1];
    A.mMatrix[1][0] = mMatrix[1][0] + B.mMatrix[1][0];
    A.mMatrix[1][1] = mMatrix[1][1] + B.mMatrix[1][1];
    return A;
}

MyMatrix MyMatrix::operator-(const MyMatrix& B){
    MyMatrix A;
    A.mMatrix[0][0] = mMatrix[0][0] - B.mMatrix[0][0];
    A.mMatrix[0][1] = mMatrix[0][1] - B.mMatrix[0][1];
    A.mMatrix[1][0] = mMatrix[1][0] - B.mMatrix[1][0];
    A.mMatrix[1][1] = mMatrix[1][1] - B.mMatrix[1][1];
    return A;
}

void MyMatrix::ScalarMultiply(double a){
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mMatrix[i][j] = mMatrix[i][j] * a;
        }
    }
}
