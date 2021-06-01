
#include<iostream>

int main(int argc, char* argv[])
{
    double temp, sum = 0;
    std::cout << "Input numbers!" << std::endl;
    do{
        std::cin >> temp;
        sum += temp;
    }while(temp != -1.0);
    sum += 1.0;
    std::cout << sum;
    return 0;
}
