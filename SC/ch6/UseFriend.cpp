#include<iostream>
#include"ExampleClass.hpp"

int main(int argc, char* argv[]){
    ExampleClass example(2.0, 3.0);
    std::cout << "Minimum value = " << example.GetMinimum() << std::endl;
    std::cout << "Maximum value = " << GetMaximum(example) << std::endl;

    return 0;
}
