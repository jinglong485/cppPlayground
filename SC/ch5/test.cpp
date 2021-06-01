#include<iostream>

double** returnANumber();
double* returnAPointer();

int main(int argc, char* argv[]){
    double** p_a;
    double* p_c;
    p_a = returnANumber();
    p_c = returnAPointer();
    std::cout << p_a[0][0] << std::endl;
    std::cout << p_c[9] << std::endl;

    return 0;
}

double** returnANumber(){
    double** p_b;
    p_b = new double* [1];
    p_b[0] = new double [1];
    return p_b;
}

double* returnAPointer(){
    double* p_d;
    p_d = new double [10];
    for(int i = 0; i< 10; i++){
        p_d[i] = (double) i;
    }
    return p_d;
}
