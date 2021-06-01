#include<iostream>
#include<cmath>

int main(int argc, char* argv[]){
    double x_prev, x_next, x;
    double const totelrance = 1e-8;
    x_prev = 1.0;
    int i = 0;
    do{
        x_next = x_prev - (exp(x_prev) + pow(x_prev, 3.0) -5.0)/
            (exp(x_prev)+ 3.0 * pow(x_prev, 2.0));
        x = x_prev;
        x_prev = x_next;
        std::cout << ++i << std::endl;
    }while(fabs(x - x_next)> totelrance);
    std::cout << x << std::endl;

    return 0;
}
