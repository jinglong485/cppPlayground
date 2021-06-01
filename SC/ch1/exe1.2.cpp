#include<iostream>

int main(int argc, char* argv[])
{
    double a, b;
    std::cout << "Enter two numbers\n";
    std::cin >> a >> b;
    std::cout << "The first number is " << a << std::endl;
    std::cout << "The second number is " << b << std::endl;
    std::cout << "The product of a and b is " << a*b << std::endl;

    return 0;
}
