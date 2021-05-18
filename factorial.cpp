#include <iostream>
#include <string>
#include <exception>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;
using std::exception;


class myexception: public exception {
    public:
	virtual const char* what() const throw() {
	    return "\nError: a negative or very large number:";
	}
} myex;



//check if number or string
void check_number(string str) {
    for (int i = 0; i < str.length(); i++){
	if (isdigit(str[i]) == false){
	    throw 0;
	}
    }
}


// calculate factorial
unsigned long long int factorial(int n){
    unsigned long long int result = 1;
    for (int i = 2; i <= n; i++){
	result *= i;
    }
    return result;
}


int main(){
    try{
	string number_str;
	cout << "Enter number: ";
	cin >> number_str;
	
	check_number(number_str);
	
	int number_int = stoi(number_str); 
	//std::stoi function returns the converted integral number as an int value (base 10).

	if (number_int < 0 || number_int >= 66){
	    throw myex;
	}else{
	    cout << number_int << "! = " << factorial(number_int) << endl;
	}
    }
    catch(const exception& e){
	cout << e.what() << '\n';
    }
    catch(const int& e){
	cout << "\nThe input isn't int!" << '\n';
    }
}

