#include<iostream>
#include<fstream>
#include<cassert>

int main(int argc, char* argv[]){
    double x[6], y[6];
    std::ifstream readFile("input.dat");
    assert(readFile.is_open());
    for (int i = 0; i < 6; i++){
        readFile >> x[i] >> y[i];
    }
    readFile.close();
    for (int i = 0; i < 6; i++){
        std::cout << "x = " << x[i] << std::endl;
        std::cout << "y = " << y[i] << std::endl << std::endl;
    }
    return 0;
}
