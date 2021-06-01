#include<iostream>
#include<string>

int main(int argc, char* argv[]){
    std::string firstName, lastName;
    std::cout << "Enter your first name." << std::endl;
    std::getline(std::cin, firstName);
    std::cout << "Enter your last name." << std::endl;
    std::getline(std::cin, lastName);
    std::cout << "Name: " << firstName + " " + lastName << std::endl;

    return 0;
}
