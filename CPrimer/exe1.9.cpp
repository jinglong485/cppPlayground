#include<iostream>

int main(int argc, char** argv){
	int sum, var;
	sum = 0;
	var = 50;
	while(var < 101){
		sum += var;
		var++;
	}
	std::cout << "the summation is: " << sum << std::endl;

	return 0;
}