#ifndef GRADUATEHEADERDEF
#define GRADUATEHEADERDEF

#include"Student.hpp"
#include<string>

class GraduateStudent:public Student{
    public:
        std::string StudentStatus;
        void ShowStudentStatus() const;
        double SumOfAll() const;
};

#endif
