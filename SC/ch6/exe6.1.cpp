#include"ComplexNumber.hpp"
//#include <ostream>

int main(int argc, char* argv[]){
    ComplexNumber z1(25.314, -25.446);
    std::cout << "The real part of complex number " << z1 << " is "
        << z1.GetRealPart() << std::endl;
    std::cout << "The imaginaru part of complex number " << z1 << " is "
        << z1.GetImaginaryPart() << std::endl;
    std::cout << "The real part of complex number " << z1 << " gotten by function is "
        << RealPart(z1) << std::endl;
    std::cout << "The imaginary part of complex number " << z1 
        << " gotten by function is " << ImaginaryPart(z1) << std::endl;
    ComplexNumber z2(z1);
    std::cout << "The complex number z2 is " << z2 << std::endl;
    ComplexNumber z3(77.3344);
    std::cout << "The complex number z3 is " << z3 << std::endl;
    std::cout << "The sum of complex number z3 " << z3 << " and real number 1 is "
        << z3 + 1.0 << std::endl;
    std::cout << "The conjugate of z1 is " << z1.CalculateConjugate() << std::endl; 
    std::cout << "Now the complex number z1 is " << z1 << std::endl;
    z1.SetToConjugate();
    std::cout << "After conjugation z1 is " << z1 << std::endl;

    return 0;
}
