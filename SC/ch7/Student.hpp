#ifndef STUDENTHEADERDEF
#define STUDENTHEADERDEF

#include<string>

class Student{
    public:
        std::string StudentName;
        double LibFine;
        double TuitionFee;
        virtual double SumOfAll() const;
        Student();
        Student(std::string name);
        Student(std::string name, double libfine, double tuition);
        void SetLibFine(double libfine);
        double GetLibFine() const;
    private:
        double mLibFine;
};

#endif
