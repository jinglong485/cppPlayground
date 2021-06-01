#include<iostream>
#include<fstream>
#include<cassert>

int main(int argc, char* argv[]){

    std::ifstream inputFile("exe3_1_output.dat");
    if (!inputFile.is_open()){
        std::cout << "cannot open file" << std::endl;
        return 1;
    }
    int numberOfRows = 0;
    while(!inputFile.eof()){
        double dummy1, dummy2, dummy3, dummy4;
        inputFile >>  dummy1 >>  dummy2 >>  dummy3 >>  dummy4;
        numberOfRows++;
        std::cout << "Row = " << numberOfRows << std::endl;
        std::cout << dummy1 << " " << dummy2 << " " <<
            dummy3 << " " << dummy4 << " " << std::endl;
        if (inputFile.fail()){
            numberOfRows--;
            std::cout << "There is an error." << std::endl;
        }
    }
    std::cout << "Number of rows = " << numberOfRows << std::endl;
    inputFile.close();

    return 0;
}
