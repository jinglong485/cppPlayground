
#include<iostream>

int main(int argc, char* argv[])
{
    double temp, sum = 0;
    std::cout << "Input numbers!" << std::endl;
    do{
        std::cin >> temp;
        sum += temp;
        if (temp < 0){
            sum = 0;
            std::cout << "What did you do! Now the summation is " << sum;
            std::cout << std::endl << "Now we need to redo it!" << std::endl;
        }
    }while(sum <= 100.0);
    std::cout << sum;
    return 0;
}
