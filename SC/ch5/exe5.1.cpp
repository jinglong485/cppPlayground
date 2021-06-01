#include<iostream>

void printNumber(int*);

int main(int argc,char* argv[]){
    int* p_int;
    p_int = new int [1];
    *p_int = 10;
    printNumber(p_int);
    std::cout << *p_int << std::endl;
    delete [] p_int;
    
    return 0;
}

void printNumber(int* p_num){
    std::cout << *p_num << std::endl;
    std::cout << p_num << std::endl;
    *p_num = 100;
}
