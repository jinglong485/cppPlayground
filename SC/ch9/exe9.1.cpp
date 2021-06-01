#include<iostream>
#include<fstream>
#include"Exception.hpp"

void ReadFile(const std::string& fileName, int line,double x[], double y[]){
    std::ifstream read_file(fileName.c_str());
    if(read_file.is_open()==false){
        throw (FileNotOpenException("File can't be opend"));
    }
    int lines = 0;
    while(!read_file.eof()){
        double dummy1,dummy2;
        read_file >> dummy1 >> dummy2;
        lines++;
    }
    lines--;
    std::cout <<  lines << std::endl;
    read_file.clear();
    read_file.seekg(std::ios::beg);
    if (lines < line){
        throw(OutOfRangeException("File doesn't have many lines"));
    }
    for(int i = 0; i < line; i++){
        read_file >> x[i] >> y[i];
    }
    read_file.close();
    std::cout << fileName << " read successfully" << std::endl;
}

int main(int argc, char* argv[]){
    double x[6], y[6];
    try{
        std::string filename;
        int lines;
        std::cout << "input file name" << std::endl;
        std::cin >> filename;
        std::cout << "input lines you want" << std::endl;
        std::cin >> lines;
        ReadFile(filename, lines, x, y);
    }
    catch(FileNotOpenException& error){
        error.PrintDebug();
        std::cout << "Couldn't open the file" << std::endl;
        std::cout << "Give a another file name" << std::endl;
        std::string file_name;
        std::cin >> file_name;
        std::cout << "Input lines to be read" << std::endl;
        int lines;
        std::cin >> lines;
        ReadFile(file_name, lines, x, y);
    }
    catch(OutOfRangeException& error){
        error.PrintDebug();
        std::cout << "File out of range" << std::endl;
        std::cout << "Give a another file name" << std::endl;
        std::string file_name;
        std::cin >> file_name;
        std::cout << "Input lines to be read" << std::endl;
        int lines;
        std::cin >> lines;
        ReadFile(file_name, lines, x, y);

    }
    for(int i=0; i < 6; i++){
        std::cout << x[i] << " and " << y[i] << std::endl;
        std::cout << i << std::endl;
    }

    return 0;
}
