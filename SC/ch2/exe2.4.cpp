#include<iostream>

int main(int argc, char* argv[])
{
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                    {7.0, 1.0, 2.0},
                    {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0},
                    {1.0, 0.0, 0.0},
                    {4.0, 1.0, 0.0}};
    double x[3], y[3] = {0.0,0.0,0.0}, z[3] = {0.0,0.0,0.0};
    double C[3][3], D[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = 0.0;
            D[i][j] = 0.0;
        }
    }

    for (int i = 0; i < 3; i++){
        x[i] = u[i] - v[i];
    }
    std::cout << "vector x is:" << std::endl;
    std::cout << "["<< std::endl;
    for (int i = 0; i < 1; i++){
        std::cout << "[";
        for (int j = 0; j < 3; j++){
            std::cout << x[j];
            std::cout << ",";
        }
        std::cout << "]"<< std::endl;
    }
    std::cout << "]" << std::endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            y[i] +=A[j][i] * u[j];
        }
    }
    std::cout << "vector y is"<< std::endl;
    std::cout << "["<< std::endl;
    for (int i = 0; i < 1; i++){
        std::cout << "[";
        for (int j = 0; j < 3; j++){
            std::cout << y[j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            z[i] +=A[j][i] * u[j];
        }
        z[i]-=v[i];
    }
    std::cout << "vector z is"<< std::endl;
    std::cout << "["<< std::endl;
    for (int i = 0; i < 1; i++){
        std::cout << "[";
        for (int j = 0; j < 3; j++){
            std::cout << z[j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;

    std::cout << "matrix A is"<< std::endl;
    std::cout << "["<< std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << "[";
        for (int j = 0; j < 3; j++){
            std::cout << A[i][j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;

    std::cout << "matrix B is"<< std::endl;
    std::cout << "["<< std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << "[";
        for (int j = 0; j < 3; j++){
            std::cout << B[i][j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            C[i][j] = 4.0 * A[i][j] - 3.0 * B[i][j];
        }
    }
    std::cout << "matrix C is"<< std::endl;
    std::cout << "["<< std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << "[";
        for (int j = 0; j < 3; j++){
            std::cout << C[i][j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
                for (int k = 0; k < 3; k++){
                    D[i][j] +=  A[i][k]* B[k][j];
                }
        }
    }
    std::cout << "matrix D is"<< std::endl;
    std::cout << "["<< std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << "[";
        for (int j = 0; j < 3; j++){
            std::cout << D[i][j];
            std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << "]" << std::endl;
    return 0;
}
