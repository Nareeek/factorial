#include <iostream>


unsigned long long int factorial(int n){
	unsigned long long int result = 1;
	for (int i = 2; i <= n; i++){
		result *= i;
	}
	return result;
}

int main(){
	int number;
	std::cout << "Enter number (1-66) -> iterative factorial: ";

	std::cin >> number;

	if (number < 0 || number >= 66){
		std::cout << "Error: a negative or very large number" << std::endl;
	}
	else {
		std::cout << number << "! = " << factorial(number) << std::endl;
	}

	return 0;
}

