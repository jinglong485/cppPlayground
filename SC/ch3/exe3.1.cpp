#include<iostream>
#include<fstream>
#include<cassert>

int main(int argc, char* argv[]){

    double x[4] = {0.0, 1.03, 0.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};
    std::ifstream inputFile("exe3_1_output.dat");
    if (inputFile.is_open()){
        std::cout << "cannot create file";
        inputFile.close();
        return 1;
    }
    std::ofstream outputFile("exe3_1_output.dat");
    outputFile.setf(std::ios::scientific);
    outputFile.precision(10);
    for (int i = 0; i < 4; i++){
        outputFile << x[i] << " ";
        outputFile.flush();
        assert(outputFile.good());
    }
    outputFile << std::endl;
    for (int i = 0; i < 4; i++){
        outputFile << y[i] << " ";
        outputFile.flush();
    }
    outputFile << std::endl;
    outputFile.close();
    std::cout << "This step" << std::endl;

    return 0;
}
