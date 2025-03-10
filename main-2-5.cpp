#include <iostream>

int main(){
    int array[] = {};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << std::boolalpha;
    std::cout << is_descending(array, n)  << std::endl;
    return 0;
}