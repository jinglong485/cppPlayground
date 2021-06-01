#include<iostream>

int main(int argc, char* argv[]){
    double a[2][2], b[2][2], c[2][2], d[2][2];
    std::cout << "Please input first raw of matrix A" << std::endl;
    std::cin >> a[0][0] >> a[1][0];
    std::cout << "Please input second raw of matrix A" << std::endl;
    std::cin >> a[0][1] >> a[1][1];
    std::cout << "Matrix A is:" << std::endl;
    std::cout << "[[" << a[0][0] << ", " << a[1][0] << "]," << std::endl;
    std::cout << " [" << a[0][1] << ", " << a[1][1] << "]]" << std::endl;

    std::cout << "Please input first raw of matrix B" << std::endl;
    std::cin >> b[0][0] >> b[1][0];
    std::cout << "Please input second raw of matrix B" << std::endl;
    std::cin >> b[0][1] >> b[1][1];
    std::cout << "Matrix B is:" << std::endl;
    std::cout << "[[" << b[0][0] << ", " << b[1][0] << "]," << std::endl;
    std::cout << " [" << b[0][1] << ", " << b[1][1] << "]]" << std::endl;

    std::cout << "Matrix C is:" << std::endl;
    std::cout << "[[" << b[0][0] + a[0][0] << ", " << b[1][0] + a[1][0]<< "]," << std::endl;
    std::cout << " [" << b[0][1] + a[0][1] << ", " << b[1][1] + a[1][1] << "]]" << std::endl;

    std::cout << "Matrix D is:" << std::endl;
    std::cout << "[[" << a[0][0] * b[0][0]  + a[0][1] * b[1][0]<< ", " << a[0][0] * b[0][1]  + a[0][1] * b[1][1]<< "]," << std::endl;
    std::cout << " [" << a[1][0] * b[0][0]  + a[1][1] * b[1][0] << ", " << a[1][0] * b[1][0]  + a[1][1] * b[1][1] << "]]" << std::endl;

    return 0;
}
