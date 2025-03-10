#include <iostream>

extern int max_element(int array[], int n);

int main(){
    int array[] = {};
    int n = sizeof(array)/sizeof(array[0]);
    
    std::cout << max_element(array, n)  << std::endl;
    return 0;
}