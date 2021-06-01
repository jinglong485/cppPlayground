#include<iostream>
#include<cassert>

int CalculateFactorial (int n);

int main(int argc, char* argv[]){
    int n = 2;
    std::cout << "The factorial of " << n << " is " << CalculateFactorial(n) << std::endl;
    
    return 0;
}

int CalculateFactorial(int n){
    assert(n > 0);
    if(n > 1){
        return n * CalculateFactorial(n-1);
    }
    else{
        return 1;
    }
}
