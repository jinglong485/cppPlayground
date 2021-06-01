#include"ComplexNumber.hpp"

int main(int argc, char* argv[]){

    ComplexNumber z1(4.0, 4.0);

    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "Modulus z1 = " << z1.CalculateModulus() << std::endl;
    std::cout << "Argument z1 = " << z1.CalculateArgument() << std::endl;

    ComplexNumber z2;
    z2 = z1.CalculatePower(3);
    std::cout << "z2 = z1*z1*z1 = " << z2 << std::endl;

    ComplexNumber z3;
    z3 = -z2;
    std::cout << "z3 = -z2 = " << z3 << std::endl;

    ComplexNumber z4;
    z4 = z1 + z2;
    std::cout << "z1 + z2 = " << z4 << std::endl;

    ComplexNumber zs[2];
    zs[0] = z1;
    zs[1] = z2;
    std::cout << "Second element of zs = " << zs[1] << std::endl;

    return 0;
}
