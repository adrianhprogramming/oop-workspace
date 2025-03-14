#include <iostream>
#include <cmath>
#include <string> 

int sum_if_palindrome(int integers[], int length);

bool is_palindrome(int integers[], int length);

int sum_array_elements(int integers[], int length);
//Sub-function 1: checking if Palindrome


bool is_palindrome(int integers[], int length){
    int n = length;
    bool palindrome_status = true;
    if (n < 1){
    palindrome_status = false;
    return palindrome_status;
    }
    
    for (int i = 0; i < n/2; i++){
        if (integers[i] != integers[length - i - 1]){
            palindrome_status = false;
            break;
        }
        }
    return palindrome_status;
}

//Sub-function 2: Returning Palindrome element sum.

int sum_array_elements(int integers[], int length){
    int n = length, elsum = 0;
    if (n < 1){
        elsum = -1;
        return elsum; 
    }
    for (int i = 0; i < n; i++){
            elsum = elsum + integers[i];
    }
    return elsum;    
}

//Function: Calling Sub-function 1 & 2
int sum_if_palindrome(int integers[], int length){
    if  (is_palindrome(integers, length) == false){
        int status = -2;
        return status;
    }
    if (sum_array_elements(integers, length) == -1){
        int status = -1;
        return status; 
    }
    return sum_array_elements(integers, length);
}

