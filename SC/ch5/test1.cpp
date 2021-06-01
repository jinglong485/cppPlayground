#include<iostream>
int i = 5;

int main(int argc, char* argv[]){
    int j = 7;
    std::cout << i << std::endl;
    {
        int i = 0, j = 11;
        std::cout << i << std::endl;
        std::cout << ::i << std::endl;
        std::cout << j << std::endl;
        }
    std::cout << j << std::endl;
    return 0;
    }
