#include<iostream>

template <class W> W abs(W);

int main(int argc, char* argv[]){
    std::cout << "100 " << abs(100) << std::endl;
    std::cout << "-100 " << abs(-100) << std::endl;
    std::cout << "100.3 " << abs(100.3) << std::endl;
    std::cout << "-100.3 " << abs(-100.3) << std::endl;

    return 0;
}

template <class W> W abs(W number){
    if (number < (W)0) {
        return -number;
    }
    else{
        return number;
    }
}
