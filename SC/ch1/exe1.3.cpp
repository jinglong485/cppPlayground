#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
    double vector_1[3], vector_2[3];
    std::cout << "Please input the first vector" << std::endl;
    std::cin >> vector_1[0] >> vector_1[1] >> vector_1[2];
    std::cout << "The vector #1 is " << "[" << vector_1[0] << ", " << vector_1[1] << ", " << vector_1[2] << "]" << std::endl;
    std::cout << "Please input the second vector" << std::endl;
    std::cin >> vector_2[0] >> vector_2[1] >> vector_2[2];
    std::cout << "The vector #2 is " << "[" << vector_2[0] << ", " << vector_2[1] << ", " << vector_2[2] << "]" << std::endl;
    std::cout << "The dot product of vector #1 and vector #2 is " << vector_1[0] * vector_2[0] + vector_1[1] * vector_2[1] + vector_1[2] * vector_2[2] << std::endl;
    std::cout << "The norm of first vector is " << sqrt(vector_1[0] * vector_1[0] + vector_1[1] * vector_1[1] + vector_1[2] * vector_1[2]) << std::endl;
    std::cout << "The norm of second vector is " << sqrt(vector_2[0] * vector_2[0] + vector_2[1] * vector_2[1] + vector_2[2] * vector_2[2]) << std::endl;
    return 0;
}
