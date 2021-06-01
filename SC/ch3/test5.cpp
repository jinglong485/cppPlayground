#include<iostream>
#include<cstdlib>

int main(int argc, char* argv[]){

    std::cout << "Number of command line arguments = " << argc << std::endl;
    for (int i = 0; i < argc; i++){
        std::cout << "Argument " << i << " = " << argv[i] << std::endl;
    }
    std::string programName = argv[0];
    int numberOfNodes = atoi(argv[1]);
    double conductivity = atof(argv[2]);
    std::cout << "Program name = " << programName << std::endl;
    std::cout << "Number of nodes = " << numberOfNodes << std::endl;
    std::cout << "Conductivity = " << conductivity << std::endl;

    return 0;
}
