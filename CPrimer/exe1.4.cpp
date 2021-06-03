#include<iostream>

int main(int argc, char** argv){
	int v1, v2;
	std::cout << "input two integers" << std::endl;
	std::cin >> v1 >> v2;
	std::cout << "the product of " << v1 << " and " << v2 << " is " \
	<< v1*v2 << std::endl;

	return 0;
}