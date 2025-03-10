#include <iostream>

extern int median_array(int array[], int n);

int main(){
    int array[] = {};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << median_array(array, n)  << std::endl;
    return 0;
}