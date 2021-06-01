#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
 std::string name;
 std::cout << "Enter your name\n";
 std::getline(std::cin, name);
 std::cout << "Your name is " << name << "\n";
 int a, b;
 std::cout << "Enter two numbers\n";
 std::cin >> a >> b;
 std::cout << "The numbers are " << a << " and " << b;

 return 0;
}

