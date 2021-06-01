#include<iostream>
#include<fstream>
#include<cassert>

int main(int argc, char* argv[]){
    double x[100], y[100];
    int i = 0;
    for (int i = 0; i < 100; i++){
        x[i] = 0;
        y[i] = 0;
    }
    std::ifstream readFile("input.dat");
    assert(readFile.is_open());
    while(!readFile.eof()){
        readFile >> x[i] >> y[i];
        i++;
    }
    readFile.close();
    for (int i = 0; i < 6; i++){
        std::cout << "x = " << x[i] << std::endl;
        std::cout << "y = " << y[i] << std::endl << std::endl;
    }
    return 0;
}
