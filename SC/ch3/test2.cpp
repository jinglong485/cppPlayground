#include<iostream>
#include<fstream>

int main(int argc, char* argv[]){
    double x = 21.6786;
    std::ofstream writeOutput("output.dat");

    writeOutput.precision(10);
    writeOutput << x  << std::endl;

    writeOutput.precision(8);
    writeOutput << x << std::endl;

    writeOutput.precision(3);
    writeOutput << x << std::endl;

    return 0;
}
