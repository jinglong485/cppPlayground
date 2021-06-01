#include"GraduateStudent.hpp"
#include<iostream>

void GraduateStudent::ShowStudentStatus() const{
    std::cout << "This student is " << StudentStatus << std::endl;
}

double GraduateStudent::SumOfAll() const{
    return LibFine;
}
