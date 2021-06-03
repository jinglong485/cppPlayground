#include<iostream>

int main(int argc, char** argv){
	int sum = 0;
	for(int i = 50; i < 101; i++){
		sum += i;
	}
	std::cout << "the summation is: " << sum << std::endl;

	for (int i = 10; i > -1; i--){
		std::cout << i << std::endl;
	}

	return 0;
}