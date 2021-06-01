#include<iostream>

int main(int argc, char* argv[]){
    double* vector1;
    double* vector2;
    vector1 = new double [3];
    vector2 = new double [3];
    for(int i = 0; i < 3; i++){
        vector1[i] = (double)(i+2);
        vector2[i] = (double)(i+22);
    }
    std::cout << "vector 1 is: [";
    for(int i = 0; i < 3; i++){
        std::cout << vector1[i] << ", ";
    }
    std::cout << "]" << std::endl;
    std::cout << "vector 2 is: [";
    for (int i = 0; i < 3; i++){
        std::cout << vector2[i] << ",";
    }
    std::cout << "]" << std::endl;
    delete vector1;
    delete vector2;

    return 0;
}
