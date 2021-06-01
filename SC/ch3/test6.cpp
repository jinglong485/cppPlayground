#include<iostream>
#include<fstream>

int main(int argc, char* argv[]){
    std::ofstream writeFile("outputFormatted.dat");
    writeFile.setf(std::ios::scientific);
    writeFile.setf(std::ios::showpos);
    writeFile.precision(13);

    double x = 3.4, y = 0.000000085, z = 984.324;
    writeFile << x << " " << y << " " << z << std::endl;
    writeFile.close();
    return 0;
}
