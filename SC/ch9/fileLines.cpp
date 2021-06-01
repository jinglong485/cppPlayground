#include<fstream>
#include<iostream>

int main(int argc, char* argv[]){
    std::ifstream read_file("good");
    int lines = 0;
    while(!read_file.eof()){
        double dummy1, dummy2;
        read_file >> dummy1 >> dummy2;
        std::cout << dummy1 << " " << dummy2 << std::endl;
        lines++;
    }
    std::cout << lines << std::endl;

    return 0;
}
