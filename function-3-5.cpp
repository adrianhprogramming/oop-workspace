//Write a function that returns the sum of the elements in the even positions in an array. 
//The function must return 0 if the size parameter, n, is less than 1. Note, 0 is considered an even position

#include <iostream>
double sum_even(double array[], int n);
//Function definition

double sum_even(double array[], int n)
{
    int elsum = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 != 0){
            continue;
        }
        else{
            elsum = elsum + array[i];
        }
        // can be rewritten differently
    }
return elsum;
}



