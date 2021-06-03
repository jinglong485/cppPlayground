#include<iostream>

int main(int argc, char** argv){
	int start, end;
	std::cout << "input two integers: ";
	std::cin >> start >> end;
	std::cout << std::endl;
	int temp;
	if(start > end){
		temp = start;
		start = end;
		end = temp;
	}
	while(start <= end){
		std::cout << start << std::endl;
		start++;
	}

	return 0;
}
