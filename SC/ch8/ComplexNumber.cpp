#include"ComplexNumber.hpp"
#include<cmath>

//Override default constructor
//Set real and imaginary parts to zero
//
ComplexNumber::ComplexNumber(){
    mRealPart = 0.0;
    mImaginaryPart = 0.0;
}

//Constructor that sets complex number z = x+iy
ComplexNumber::ComplexNumber(double x, double y){
    mRealPart = x;
    mImaginaryPart = y;
}

//Copy constructor of complex number
ComplexNumber::ComplexNumber(const ComplexNumber& z){
    mRealPart = z.mRealPart;
    mImaginaryPart = z.mImaginaryPart;
} 

//Constructor that sets real part of a complex number z = x + 0i
ComplexNumber::ComplexNumber(double x){
    mRealPart = x;
    mImaginaryPart = 0.0;
}

//Method for computing the modulus of a
//comlex number
double ComplexNumber::CalculateModulus() const{
    return sqrt(mRealPart * mRealPart + mImaginaryPart * mImaginaryPart);
}

//Method for computing the argument of a comlex number
double ComplexNumber::CalculateArgument() const{
    return atan2(mImaginaryPart, mRealPart);
}

//Method for raising conlex number to the power n
//using De Moiver's theorem - first conlex number must be converted to polar form
ComplexNumber ComplexNumber::CalculatePower(double n) const{
    double modulus = CalculateModulus();
    double argument = CalculateArgument();
    double mod_of_result = pow(modulus, n);
    double arg_of_result = argument * n;
    double real_part = mod_of_result * cos(arg_of_result);
    double imag_part = mod_of_result * sin(arg_of_result);
    ComplexNumber z(real_part, imag_part);

    return z;
}

//Overloading the = (assignment) operator
ComplexNumber& ComplexNumber::operator=(const ComplexNumber& z){
    mRealPart = z.mRealPart;
    mImaginaryPart = z.mImaginaryPart;

    return *this;
}

//Overloading the unary - operator
ComplexNumber ComplexNumber::operator-() const{
    ComplexNumber w;
    w.mRealPart = -mRealPart;
    w.mImaginaryPart = -mImaginaryPart;

    return w;
}

//Overloading the binary + operator
ComplexNumber ComplexNumber::operator+(const ComplexNumber& z) const{
    ComplexNumber w;
    w.mRealPart = mRealPart + z.mRealPart;
    w.mImaginaryPart = mImaginaryPart + z.mImaginaryPart;
    //std::cout << "it is me!" << std::endl;

    return w;
}

//Overloading the binary - operator
ComplexNumber ComplexNumber::operator-(const ComplexNumber& z) const{
    ComplexNumber w;
    w.mRealPart = mRealPart - z.mRealPart;
    w.mImaginaryPart = mImaginaryPart - z.mImaginaryPart;

    return w;
}

//Overloading the insertion << operator
std::ostream& operator << (std::ostream& output, const ComplexNumber& z){
    //Format as "(a + bi)" or as "(a - bi)"
    output << "(" << z.mRealPart << " ";
    if (z.mImaginaryPart >= 0.0){
        output << "+ " << z.mImaginaryPart << "i)";
    }
    else{
        output << "- " << -z.mImaginaryPart << "i)";
    }

    return output;
}

//Method for returning the real part of a complex number
double ComplexNumber::GetRealPart() const{
    return mRealPart;
}

//Method for returnning the imaginary part of a complex number
double ComplexNumber::GetImaginaryPart() const{
    return mImaginaryPart;
}

//function for returning the real part of a complex number
double RealPart(const ComplexNumber& z){
    return z.mRealPart;
}

//function for returning the imaginary part of a complex number
double ImaginaryPart(const ComplexNumber& z){
    return z.mImaginaryPart;
}

//method for return a conjugate number of complex number z
ComplexNumber ComplexNumber::CalculateConjugate() const{
    ComplexNumber z(mRealPart, -mImaginaryPart);
    return z;
}

//method for set a complex number to its conjugate
void ComplexNumber::SetToConjugate(){
    mImaginaryPart = -mImaginaryPart;
}

//Overloading the binary operator *
ComplexNumber ComplexNumber::operator*(const ComplexNumber& z) const{
    ComplexNumber w;
    w.mRealPart = mRealPart * z.mRealPart - mImaginaryPart * z.mImaginaryPart;
    w.mImaginaryPart = mRealPart * z.mImaginaryPart + mImaginaryPart * z.mRealPart;
    return w;
}
