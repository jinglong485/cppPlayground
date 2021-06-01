#include<fstream>

double myFunction(double y);

int main(int argc, char* argv[]){
    std::ofstream writeOutput("result2.txt");
    for(int i = 0; i < 100; i++){
        writeOutput << i * 0.01 << " " << myFunction(i* 0.01) << std::endl;
    }
    writeOutput.close();
    return 0;
}

double myFunction(double y){
    return (y * y + 2 * y + 4)/2;
}
