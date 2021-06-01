#include<iostream>
#include"PhDStudent.hpp"

int main(int argc, char* argv[]){
    PhD A;
    A.LibFine = 100000;
    A.TuitionFee = 20000000;
    std::cout << "The total a PhD student needs to pay is " << A.SumOfAll() << " (which is not true)."<< std::endl;

    return 0;
}
