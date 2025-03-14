#include <iostream>
#include <cmath>
#include <string>

extern void count_digits(int array[4][4]);

int main(){
    int array[4][4] = {
        {1, 2, 2, 2 },
        {0, 0, 0,0},
        {2, 2, 0, 1},
        {2, 3, 2,2}};
    count_digits(array);
    return 0;
}