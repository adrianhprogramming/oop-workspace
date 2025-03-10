#include <iostream>

extern bool is_ascending(int array[], int n);

int main(){
    int array[] = {1,2,3,3,3,4};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << std::boolalpha;
    std::cout << is_ascending(array, n)  << std::endl;
    return 0;
}