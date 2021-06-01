#include"ComplexNumber.hpp"
#include"ComplexNumber.cpp"
#include<vector>
#include<iostream>

int main(int argc, char* argv[]){
    std::vector<ComplexNumber> carray;
    carray.reserve(100);
    carray.push_back(ComplexNumber(2,4));
    for(int i = 0; i < 78; i++){
        carray.push_back(ComplexNumber(10*i, -11.5*(double)i));
    }
    std::cout << "The length of vector is " << carray.size() << std::endl;
    std::vector<ComplexNumber>::const_iterator c;
    for(c=carray.begin();c!=carray.end();c++){
        std::cout << *c << std::endl;
    }
    carray.erase(carray.begin()+22, carray.end());
    std::cout << "The length of vector is " << carray.size() << std::endl;
    for(auto c=carray.begin();c!=carray.end();c++){
        std::cout << *c <<std::endl;
    }
    for(ComplexNumber item : carray){
        std::cout << item << std::endl;
    }
    return 0;
}
