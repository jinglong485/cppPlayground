#include"ComplexNumber.hpp"
#include<cassert>

double factor(int n){
    assert(n > -1);
    if(n == 0){
        return (double)1;
    }
    else{
        return (double) (n) * factor(n-1);
    }
}

//B = A * B
void MatrixMultiply(ComplexNumber** A, ComplexNumber*** B){
    ComplexNumber** temp;
    //make a temp matrix copying matrix B
    temp = new ComplexNumber*[3];
    for(int i = 0; i < 3; i++){
        temp[i] = new ComplexNumber[3];
        for(int j = 0; j < 3; j++){
            temp[i][j] = B[0][i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j =0; j < 3; j++){
            B[0][i][j] = 0;
            for(int k = 0; k < 3; k++){
                B[0][i][j] = B[0][i][j] + A[i][k] * temp[k][j];
            }
        }
    }
}

//B = f * A
void MatrixScalarMultiply(double f, ComplexNumber** A, ComplexNumber*** B){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        B[0][i][j] = A[i][j] * f;
    }
  }  
}

//B = B + A
void MatrixAddition(ComplexNumber** A, ComplexNumber*** B){
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            B[0][i][j] = B[0][i][j] + A[i][j];
        }
    }
}

int main(int argc, char* argv[]){
    ComplexNumber** A;
    ComplexNumber** B;
    A = new ComplexNumber* [3];
    for(int i = 0; i < 3; i++){
        A[i] = new ComplexNumber [3]; 
        for(int j = 0; j < 3; j++){
            //ComplexNumber z(i+1, j+1);
            A[i][j] = 0;
        }
    }

    B = new ComplexNumber* [3];
    for(int i = 0; i < 3; i++){
        B[i] = new ComplexNumber [3]; 
        for(int j = 0; j < 3; j++){
            B[i][j] = 0;
        }
    }
    for(int i = 0; i < 3; i++){
        B[i][i] = 1;
    }

    ComplexNumber** res;
    res = new ComplexNumber* [3];
    for(int i=0; i < 3; i++){
        res[i] = new ComplexNumber[3];
        for(int j = 0; j < 3; j++){
            res[i][j] = 0;
        }
    }
    for(int i = 0; i < 10000; i++){
        ComplexNumber** temp;
        temp = new ComplexNumber* [3];
        for(int l = 0; l < 3; l++){
            temp[l] = new ComplexNumber[3];
        }
        if(i > 0){
            MatrixMultiply(A, &B);
        }
        MatrixScalarMultiply(1/factor(i), B, &temp);
        MatrixAddition(temp, &res);
        for(int i = 0; i < 3; i++){
            delete[] temp[i];
        }
        delete[] temp;
    }

    for(int i = 0; i < 3; i++){
        //std::cout << factor(i) << std::endl;
        for(int j = 0; j < 3; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3; j++){
            std::cout << res[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    //delete matrices
    for(int i = 0; i < 3; i++){
        delete[] A[i];
    }
    delete[] A;
    
    for(int i = 0; i < 3; i++){
        delete[] res[i];
    }
    delete[] res;
    
    for(int i = 0; i < 3; i++){
        delete[] B[i];
    }
    delete[] B;

    return 0;
}
