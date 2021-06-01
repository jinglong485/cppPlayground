#include<iostream>

int main(int argc, char* argv[]){
    int* p_x;
    int x;
    int* p_int;
    int* p_int2;
    
    x = 5;
    p_x = &x;
    std::cout << p_x << std::endl;
    *p_int = 5;//unsafe, where is p_int pointing at is unknown
    std::cout << p_int << std::endl;
    //p_int2 = &x;
    //std::cout << p_int2 << std::endl;
    return 0;
}
