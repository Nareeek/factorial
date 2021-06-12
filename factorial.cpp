#include "factorial.h"


//check if number or string
void check_number(string str) {
    for (int i = 0; i < str.length(); i++){
        if (isdigit(str[i]) == false){
            throw 0;
        }
    }
}


// function overloading for string
long long int factorial(string n){
   return -1;
}


// calculate factorial
unsigned long long int factorial(int n){
  if(n < 0){
    return -1;
  }

  unsigned long long int result = 1;
    for (int i = 2; i <= n; i++){
      result *= i;
    }
  return result;
}

