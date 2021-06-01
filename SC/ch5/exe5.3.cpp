#include<iostream>

//function using pointers
void swapNumbers(double*, double*);
//function using references
void swapNumbers(double&, double&);

int main(int argc, char* argv[]){
    double a = 100, b =123;
    std::cout << "a is " << a << " and b is " << b << std::endl;
    swapNumbers(&a, &b);
    std::cout << "a is " << a << " and b is " << b << std::endl;
    swapNumbers(a, b);
    std::cout << "a is " << a << " and b is " << b << std::endl;
    return 0;
}

void swapNumbers(double* a, double* b){
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapNumbers(double& a, double& b){
    double temp;
    temp = a;
    a = b;
    b = temp;
}
