#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int array[] = {8,20,910,1000,910,20,8};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << std::boolalpha;
    std::cout << is_fanarray(array, n)  << std::endl;
    return 0;
}