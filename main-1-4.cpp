#include <iostream>

extern sum_two_arrays(int array[], int secondarray[], int n);

int main(){
    int array[] = {1,2,1,4,1,3,3};
    int secondarray[] = {3,3,2};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << sum_two_arrays(array, secondarray, n)  << std::endl;
    return 0;
}