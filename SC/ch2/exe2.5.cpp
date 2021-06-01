#include<iostream>
#include<cassert>

int main(int argc, char* argv[]){

    double A[2][2] = {{4, 10}, {1, 1}};
    double checkNumber;
    double invertA[2][2], product[2][2]= {{0.0, 0.0}, {0.0, 0.0}};

    std::cout << "matrix A is"<< std::endl;
    for (int i = 0; i < 2; i++){
        std::cout << "[";
        for (int j = 0; j < 2; j++){
            std::cout << A[i][j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }

    checkNumber = A[0][0] * A[1][1] - A[1][0] * A[0][1];
    assert(checkNumber != 0.0);
    invertA[0][0] = A[1][1]/checkNumber;
    invertA[0][1] = -A[0][1]/checkNumber;
    invertA[1][0] = -A[1][0]/checkNumber;
    invertA[1][1] = A[0][0]/checkNumber;

    std::cout << "invert matrix A is"<< std::endl;
    for (int i = 0; i < 2; i++){
        std::cout << "[";
        for (int j = 0; j < 2; j++){
            std::cout << invertA[i][j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                product[i][j] += A[i][k] * invertA[k][j];
            }
        }
    }

    std::cout << "product of A and inverted A is"<< std::endl;
    for (int i = 0; i < 2; i++){
        std::cout << "[";
        for (int j = 0; j < 2; j++){
            std::cout << product[i][j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}
