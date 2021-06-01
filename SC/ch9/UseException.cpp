#include<iostream>
#include<fstream>
#include"Exception.hpp"

void ReadFile(const std::string& fileName, double x[], double y[]){
    std::ifstream read_file(fileName.c_str());
    if(read_file.is_open()==false){
        throw (Exception("FILE", "File can't be opend"));
    }
    for(int i = 0; i < 6; i++){
        read_file >> x[i] >> y[i];
    }
    read_file.close();
    std::cout << fileName << " read successfully" << std::endl;
}

int main(int argc, char* argv[]){
    double x[6], y[6];
    try{
        ReadFile("Afile.txt", x, y);
    }
    catch(Exception& error){
        error.PrintDebug();
        std::cout << "Couldn't open the file" << std::endl;
        std::cout << "Give a another file name" << std::endl;
        std::string file_name;
        std::cin >> file_name;
        ReadFile(file_name, x, y);
    }

    return 0;
}
