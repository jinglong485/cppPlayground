#include<iostream>

double CalculateMinimum(double a, double b);

int main(int argc, char* argv[]){
    double x = 4.0 ,y = -8.0;
    double minimum_value;
    minimum_value = CalculateMinimum(x, y);
    std::cout << "The minimum of fsdfasdfasd" << x << " and " << y << " is "
    << minimum_value << std::endl;
    return 0;
    }

double CalculateMinimum(double a, double b){
    double minimum_temp;
    if (a < b){
        minimum_temp = a;}
    else{
        minimum_temp = b;}
    return minimum_temp;
    }
