#include <iostream>
#include <cmath>
#include <string> 

extern int sum_min_max(int integers[], int length);

extern int array_min(int integers[], int length);

extern int array_max(int integers[], int length);

int main(){
    int integers[] = {1,2,3};
    int length = sizeof(integers)/sizeof(integers[0]);
    std::cout << sum_min_max(integers, length);
}