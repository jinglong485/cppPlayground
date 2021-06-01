#include<iostream>

void PrintPassOrFail(int, int);
int main(int argc, char* argv[]){
    //int score = 29, pass_mark = 30;
    PrintPassOrFail(atoi(argv[1]), atoi(argv[2]));

    return 0;
    }

void PrintPassOrFail(int score, int passMark){
    if (score >= passMark){
        std::cout << "Pass - Congrats!" << std::endl;
        }
    else{
        std::cout << "Fail - WTF!" << std::endl;
        }
    }
