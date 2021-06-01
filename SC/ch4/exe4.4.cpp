#include<iostream>

int main(int argc, char* argv[]){
    int row = 1000;
    int col = 1000;
    double** A;
    double** B;
    double** C;
    for (int n = 0; n < 1000000000000000000; n++)
    {
    //std::cout << "Input shape of Matrices: ";
    // std::cin >> row >> col;
    A = new double* [row];
    //std::cout << "Input Matrix A:" << std::endl;
    for (int i = 0; i < row; i++){
        A[i] = new double [col];
        //std::cout << "input the " << i << " row:" << std::endl;
        for(int j = 0; j < col; j++){
            //std::cout << "the " << j << " element:";
            //std::cin >> A[i][j];
            A[i][j] = (double) (i * j);
            }
    }
    /*
    std::cout << "Matrix A is:" << std::endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j <col; j++){
            std::cout << A[i][j] << " ";
            }
        std::cout << std::endl;
        }
    */
    B = new double* [row];
    //std::cout << "Input Matrix B:" << std::endl;
    for (int i = 0; i < row; i++){
        B[i] = new double [col];
        //std::cout << "input the " << i << " row:" << std::endl;
        for(int j = 0; j < col; j++){
            //std::cout << "the " << j << " element:";
            //std::cin >> B[i][j];
            B[i][j] = (double) (i + j);
            }
    }
    /*
    std::cout << "Matrix B is:" << std::endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j <col; j++){
            std::cout << B[i][j] << " ";
            }
        std::cout << std::endl;
        }
    */
    C = new double* [row];
    for(int i = 0; i < row; i++){
        C[i] = new double [col];
        for(int j = 0; j < col; j++){
            C[i][j] = A[i][j] + B[i][j];
            }
        }
        /*
    std::cout << "Matrix C is:" << std::endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j <col; j++){
            std::cout << C[i][j] << " ";
            }
        std::cout << std::endl;
        }
    */
    for(int i = 0; i < row; i++){
    delete[] A[i];
    delete[] B[i];
    delete[] C[i];
    }
    delete[] B;
    delete[] A;
    delete[] C;}
    
    return 0;
}
