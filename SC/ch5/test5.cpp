double** AllocateMatrixMemory(int, int);
void FreeMatrixMemory(int, double**);

int main(int argc, char* argv[]){
    double** A;
    A = AllocateMatrixMemory(5, 5);
    A[0][1] = 2.0;
    A[4][2] = 4.9;
    FreeMatrixMemory(5, A);
    
    return 0;
    }

double** AllocateMatrixMemory(int numRows, int numCols){
    double** matrix;
    matrix = new double* [numRows];
    for (int i = 0; i < numRows; i++){
        matrix[i] = new double [numCols];
        }
    return matrix;
    }

void FreeMatrixMemory(int numRows, double** matrix){
    for(int i = 0; i < numRows; i++){
        delete [] matrix[i];
        }
    }
