#include<string>
#include"Student.hpp"
#include<cassert>

Student::Student(){
    StudentName = "unknowm";
    LibFine = 0.0;
    TuitionFee = 0.0;
    mLibFine = 0.0;
}

Student::Student(std::string name){
    StudentName = name;
    LibFine = 0.0;
    TuitionFee = 0.0;
    mLibFine = 0.0;
}

Student::Student(std::string name, double libfine, double tuition){
    StudentName = name;
    LibFine = 0.0;
    TuitionFee = tuition;
    mLibFine = libfine;
}

double Student::SumOfAll() const{
    return LibFine + TuitionFee + mLibFine;
}

void Student::SetLibFine(double libfine){
    mLibFine = libfine;
}

double  Student::GetLibFine() const{
    return mLibFine;
}
