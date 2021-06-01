#include<iostream>

int main(int argc, char* argv[]){
    double x,y, temp;
    double* p_temp;
    double* p_x;
    double* p_y;
    p_x = &x;
    p_y = &y;
    p_temp = &temp;
    if (argc != 3){
        std::cout << "Cannot get two numbers" << std::endl;
        x = 33;
        y = 22;
        std::cout << "X is assigned to: " << x << std::endl;
        std::cout << "Y is assigned to: " << y << std::endl;
    }
    else{
        x = atof(argv[1]);
        y = atof(argv[2]);
        std::cout << "X is assigned to: " << x << std::endl;
        std::cout << "Y is assigned to: " << y << std::endl;
    }
    *p_temp = *p_x;
    *p_x = *p_y;
    *p_y = *p_temp;
    std::cout << "X now is: " << x << std::endl;
    std::cout << "Y now is: " << y << std::endl;

    return 0;
}
