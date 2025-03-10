#include <iostream>

int main(){
    double array[] = {4, 8, 12, 15, 16};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << sum_even(array, n)  << std::endl;
    return 0;
}