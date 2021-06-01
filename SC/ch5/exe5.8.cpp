#include<iostream>
#include<cmath>

double Det(double**, int);
void MatrixGenerator(double***, int, int);
void MatrixDestroyer(double***, int);
void ShowMatrix(double**, int, int);

int main(int argc, char* argv[]){
    double** matrix;
    int N = 2;
    MatrixGenerator(&matrix, N, N);
    std::cout << "The matrix is:" << std::endl;
    ShowMatrix(matrix, N, N);
    std::cout << "The determination of the matrix is " << Det(matrix, N) << std::endl;
    MatrixDestroyer(&matrix, N);
    return 0;
}

void MatrixGenerator(double*** A, int row, int col){
    *A = new double* [row];
    for(int i = 0; i < row; i++){
        A[0][i] = new double [col];
        for(int j = 0; j < col; j++){
            A[0][i][j] = (double)i + (double)j + sqrt((double)i + (double)j * (double)j);
        }
    }
}

void MatrixDestroyer(double*** A, int row){
    for(int i = 0; i < row; i++){
        delete[] A[0][i];
    }
    delete[] *A;
}

void ShowMatrix(double** A, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

double Det(double** A, int n){
    if(n == 2){
        return A[0][0] * A[1][1] - A[0][1] * A[1][0];
    }
    else{
        double sum = 0;
        for(int i = 0; i < n; i++){
            double** temp_A;
            temp_A = new double* [n-1];
            for(int l = 0; l < n-1; l++){
                temp_A[l] = new double [n-1];
                for(int m = 0; m < i; m++){
                    temp_A[l][m] = A[l+1][m];
                }
                for(int m = i; m < n-1; m++){
                    temp_A[l][m] = A[l+1][m+1];
                }                
            }
            sum += A[0][i] * pow(-1.0, i) *Det(temp_A, n-1);
            MatrixDestroyer(&temp_A, n-1);
         }
        return sum;
    }
}
