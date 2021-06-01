#include<iostream>
#include<cmath>
#include<random>

void statistics(double*, int, double*);

int main(int argc, char* argv[]){
    int n;
    double* p_array; 
    double* p_results;
    n = atoi(argv[1]);
    p_array = new double [n];
    p_results = new double [2];
    for(int i = 0; i < n; i++){
        p_array[i] = i * (i + 2) + sqrt(i + 4);
    }
    statistics(p_array, n, p_results);
    std::cout << "The mean of the array is " << p_results[0] << std::endl;
    std::cout << "The standard deviation of the array is " << p_results[1] << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << p_array[i] << " ";
    }
    std::cout << std::endl;
    delete [] p_results;
    delete [] p_array;
    
    return 0;
}

void statistics(double* array, int num, double* results){
    double sum = 0, squareSum = 0;
    for(int i = 0; i < num; i++){
        sum += array[i];
    }
    results[0] = sum/num;
    for(int i = 0; i < num; i++){
    squareSum += (array[i] - results[0]) * (array[i] - results[0]);
    }
    results[1] = sqrt(squareSum/(num -1.0));
}
