#include <iostream>
#include <cmath>
#include <string>

extern int sum_if_palindrome(int integers[], int length);

extern bool is_palindrome(int integers[], int length);

extern int sum_array_elements(int integers[], int length);

// Main
int main(){
    int integers[] = {2,2,3,3,2,2};
    int length = sizeof(integers)/sizeof(integers[0]);
    std::cout << sum_if_palindrome(integers, length);
}