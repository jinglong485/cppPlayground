#include<iostream>

int main(int argc, char* argv[]){
    double* vector1;
    double* vector2;
    double scaleProduct = 0.0;
    vector1 = new double [3];
    vector2 = new double [3];
    for(int i = 0; i < 3; i++){
        vector1[i] = (double)(i+2);
        vector2[i] = (double)(i+1);
    }
    std::cout << "vector 1 is: [";
    for(int i = 0; i < 3; i++){
        std::cout << vector1[i] << ",";
    }
    std::cout << "]" << std::endl;
    std::cout << "vector 2 is: [";
    for (int i = 0; i < 3; i++){
        std::cout << vector2[i] << ",";
    }
    std::cout << "]" << std::endl;
    for (int i = 0; i < 3; i++){
        std::cout << scaleProduct << std::endl;
        std::cout << vector1[i] << std::endl;
        std::cout << vector2[i] << std::endl;
        scaleProduct = scaleProduct + vector1[i] * vector2[i];
    }
    std::cout << "The scale product is: " << scaleProduct << std::endl;
    delete vector1;
    delete vector2;

    return 0;
}
