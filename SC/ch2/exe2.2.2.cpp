
#include<iostream>
#include<cmath>

int main(int argc, char* argv[])
{
    double p, q, x, y;
    int j;
    std::cout << "input number p, q, y, j." << std::endl;
    std::cin >> p >> q >> y >> j;
    std::cout << "p = " << p << std::endl << "q = " << q << std::endl;
    std::cout << "y = " << y << std::endl << "j = " << j << std::endl;
    if ((y > q || fabs(y - q) < 10e-8) && j == 20)
    {
        x = 5.0;
    }
    else
    {
        x = p;
    }
    std::cout << "x = " << x <<std::endl;
    return 0;
}
