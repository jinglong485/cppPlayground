#include<iostream>

void fuc(double** b);

int main(int argc, char* argv[]){
    double* a;
    fuc(&a);
    for(int i = 0; i < 2; i++){
        std::cout << a[i] << std::endl;
    }
    
    return 0;
}

void fuc(double** x){
    *x = new double [2];
    x[0][0] = 14.3;
    x[0][1] = 21.1; 
}
