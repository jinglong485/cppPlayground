#include<iostream>

int main(int argc, char* argv[]){
    double carArray[5], sumation = 0;
    int i;
    std::cout << "Please input five numbers." << std::endl;
    for(i=0;i<5;i++){
        std::cin >> carArray[i];
        sumation += carArray[i];
    }
    std::cout << "The average cars is " << sumation/5.0 << ".\n";

    return 0;
}
