#include <iostream>

int main(){
    int array[] = {1,2,3,3,2,3};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << std::boolalpha;
    std::cout << is_ascending(array, n)  << std::endl;
    return 0;
}