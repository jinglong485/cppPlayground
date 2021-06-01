#include<iostream>
#include"Student.hpp"

int main(int argc, char* argv[]){
    Student A;
    Student B("Somebady What");
    Student C("Someone Blah", 300, 100);
    std::cout << A.StudentName << " has library fine " << A.LibFine \
        << " and tuition fee " << A.TuitionFee << ". In total is " \
        << A.SumOfAll() << std::endl;
    std::cout << B.StudentName << " has library fine " << B.LibFine \
        << " and tuition fee " << B.TuitionFee << ". In total is " \
        << B.SumOfAll() << std::endl;
    std::cout << C.StudentName << " has library fine " << C.LibFine \
        << " and tuition fee " << C.TuitionFee << ". In total is " \
        << C.SumOfAll() << std::endl;

    return 0;
}
