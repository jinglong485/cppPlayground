#include"Student.hpp"
#include"GraduateStudent.hpp"
#include<iostream>

int main(int argc, char* argv[]){
    Student A;
    GraduateStudent B;
    std::cout << "The total money student a owes is " << A.SumOfAll()\
        << std::endl;
    B.StudentStatus = "Full-time";
    std::cout << "The status of student B is " << B.StudentStatus \
        << std::endl;
    std::cout << "Using method to show the status is ";
    B.ShowStudentStatus();
    //std::cout << std::endl;
    std::cout << "The money student B needs to pay is " << B.SumOfAll() \
        << std::endl;

    return 0;
}
