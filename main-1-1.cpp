#include <iostream>
#include <cmath>
#include <string>

extern int sum_diagonal(int array[4][4]);

int main(){
    int array[4][4]{
        {1234, 56, 2, 3 },
        {1212, 33, 33,20},
        {1434, 80, 0, 10},
        {1312, 78, 100,9}};

        std::cout << sum_diagonal(array);
}