#include<iostream>
#include<cmath>

int main(int argc, char* argv[]){
    double iter[100];
    iter[0] = 0.0;
    for (int i = 0; i < 100; i++){
        iter[i] = iter[i-1] - (exp(iter[i-1]) + pow(iter[i-1], 3.0) -5.0)/
            (exp(iter[i-1])+ 3.0 * pow(iter[i-1], 2.0));
    }
    for (int i = 0; i < 100; i++){
        std::cout << iter[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
