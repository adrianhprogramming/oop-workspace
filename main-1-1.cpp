
#include <iostream>

//Write a function that returns the sum of all elements in an int array. 
//The parameters of the function are the array and the number of elements in the array. 
//The function should return 0 if the size parameter, n, is less than 1.
#include <iostream>
extern int array_sum(int[], int);

int main(){
int array[] = {};
int n = sizeof(array)/sizeof(array[0]);

std::cout << array_sum(array, n)  << std::endl;
return 0;
}
