#include <iostream>

extern int min_element(int array[], int n);

int main(){
    int array[] = {8,2,9,1,3,3,2};
    int n = sizeof(array)/sizeof(array[0]);
    
    std::cout << min_element(array, n)  << std::endl;
    return 0;
}


