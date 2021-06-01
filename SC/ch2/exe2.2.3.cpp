
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
    if (p > q)
    {
        x = 0.0;
    }
    else if ((p < q || fabs(p-q) < 10e-12) && j == 10)
    {
        x = 1.0;
    }
    else
    {
        x = 2.0;
    }
    std::cout << "x = " << x <<std::endl;
    return 0;
}
