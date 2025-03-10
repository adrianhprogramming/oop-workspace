#include <iostream>

int main(){
    int array[] = {1,2,1,4,1,3,3};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << num_count(array, n, 5)  << std::endl;
    return 0;
}