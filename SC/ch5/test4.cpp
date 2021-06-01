#include<iostream>
void HasNoEffect( double);

int main(int argc, char* argv[]){
    double x = 2.0;
    HasNoEffect(x);
    std::cout << x << std::endl;
    
    return 0;
    }

void HasNoEffect( double x){
    x += 1.0;
    }
