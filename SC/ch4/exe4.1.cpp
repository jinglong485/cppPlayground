#include<iostream>

int main(int argc, char* argv[]){
    int i = 5;
    int* p_j;
    int* p_k;

    p_j = &i;
    *p_j *= *p_j;
    p_k = new int [0];
    p_k[0] = i;
    *p_j = 0;
    std::cout << "integer i is: " << i << std::endl;
    std::cout << "pointer p_j is " << p_j << std::endl;
    std::cout << "pointer p_k is " << p_k <<std::endl;
    std::cout << "pointer p_j value is " << *p_j << std::endl;
    std::cout << "pointer p_k value is " << *p_k << std::endl;

    return 0;
}
