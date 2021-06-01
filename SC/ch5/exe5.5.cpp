#include<iostream>
#include<cassert>

void Multiply(double**, int, int, double**, int, int, double***, int&, int&);
void Multiply(double*, int, double**, int, int, double**, int&);
void Multiply(double**, int, int, double*, int, double**, int&);
void Multiply(double, double**, int, int, double***, int&, int&);
void Multiply(double**, int, int, double, double***, int&, int&);
void MatrixGenerator(double***, int, int);
void MatrixDestroyer(double***, int);
void ShowMatrix(double**, int, int);

int main(int argc, char* argv[]){

    double** p_matrix_1;
    double** p_matrix_2;
    double** p_matrix_3;//matrix
    double* p_vector_1;//vector
    int row_1, row_2, col_1, col_2, row_3, col_3;//sizes of matrices
    int v_length_1;//length of vectors
    row_1 = 2;
    col_1 = 4;
    row_2 = 4;
    col_2 = 6;
    MatrixGenerator(&p_matrix_1, row_1, col_1);
    MatrixGenerator(&p_matrix_2, row_2, col_2);
    std::cout << "The first matrix is:" << std::endl;
    ShowMatrix(p_matrix_1, row_1, col_1);
    std::cout << "The second matrix is:" << std::endl;
    ShowMatrix(p_matrix_2, row_2, col_2);
    Multiply(p_matrix_1, row_1, col_1, p_matrix_2, row_2, col_2, &p_matrix_3, row_3, col_3);
    std::cout << "The third matrix is:" << std::endl;
    ShowMatrix(p_matrix_3, row_3, col_3);
    MatrixDestroyer(&p_matrix_1, row_1);
    MatrixDestroyer(&p_matrix_2, row_2);
    MatrixDestroyer(&p_matrix_3, row_3);

    return 0;
}

void MatrixGenerator(double*** A, int row, int col){
    *A = new double* [row];
    for(int i = 0; i < row; i++){
        A[0][i] = new double [col];
        for(int j = 0; j < col; j++){
            A[0][i][j] = (double)i + (double)j;
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

//matrix A and matrix B multiply, row and col are the sizes of the matrice
//the last three parameters are the pointer of the product of matrix A and B
//and the pointers of raw and col for the size of matrix C
void Multiply(double** A, int row_A, int col_A, double** B, int row_B, int col_B, double*** C, int& row_C, int& col_C){
    assert(col_A == row_B);
    row_C = row_A;
    col_C = col_B;
    *C = new double* [row_C];
    for(int i = 0; i < row_C; i++){
        C[0][i] = new double[col_C];
        for(int j = 0; j < col_C; j++){
            C[0][i][j] = 0;
            for(int k = 0; k < col_A; k++){
                C[0][i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

//vector V and a matrix A multiply, C = VA, C is a vector
void Multiply(double* V, int len_V, double** A, int row, int col, double** C, int& len_C){
    assert(len_V == row);
    len_C = col;
    *C = new double[len_C];
    for(int i = 0; i < len_C; i++){
        C[i] = 0;
        for(int j = 0; j < len_V; j++){
            C[0][i] += V[j] * A[j][i];
        }
    }
}

//matrix A and vector V multiply, C = AV, C is a vector
void Multiply(double** A, int row, int col, double* V, int len_V, double** C, int& len_C){
    assert(len_V == col);
    len_C = row;
    *C = new double[len_C];
    for(int i = 0; i < len_C; i++){
        C[i] = 0;
        for (int j = 0; j < len_V; j++){
            C[0][i] += A[i][j] * V[j];
        }
    }
}

//scalar S and matrix A multiply, C = SA, C is a matrix
void Multiply(double S, double** A, int row_A, int col_A, double*** C, int& row_C, int& col_C){
    row_C = row_A;
    col_C = col_A;
    *C = new double* [row_C];
    for(int i = 0; i < row_C; i++){
        C[0][i] = new double [col_C];
        for(int j = 0; j < col_C; j++){
            C[0][i][j] = S * A[i][j];
        }
    }
}

//matrix A and scalar S, C = AS, C is a matrix
void Multiply(double** A, int row_A, int col_A, double S, double*** C, int& row_C, int& col_C){
    Multiply(S, A, row_A, col_A, C, row_C, col_C);
}








