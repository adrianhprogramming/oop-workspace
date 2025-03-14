#include <iostream>
#include <cmath>
#include <string> 

int binary_to_init (int binary_digits[], int number_of_digits);

int binary_to_init (int binary_digits[], int number_of_digits){
    int n = number_of_digits;
    int decimal = 0;
    for (int i = 0; i < number_of_digits; i++){
        if (binary_digits[i] == 0)
        {
        continue;
        }        
    decimal = decimal + pow(2,(n-i-1));
    }
return decimal;
} 