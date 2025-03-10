#include <iostream>
extern double array_mean(int array[], int n);

int main(){
    int array[] = {1,2,1,4,1,3,3};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << array_mean(array, n)  << std::endl;
    return 0;
}