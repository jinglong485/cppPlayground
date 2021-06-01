#include<iostream>

int main(int argc, char* argv[])
{
    double x = 10.0;
    int count = 0;
    while (x > 1.0)
    {
        x *= 0.5;
        std::cout << "x = " << x << ", count = " << count << std::endl;
        count ++;
        std::cout << "x = " << x << ", count = " << count << std::endl;
        std::cout << "Reached bottom of the while loop" << std::endl;
    }
    std::cout << "count = " << count << std::endl;
}
