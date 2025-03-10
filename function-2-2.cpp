//Write a function that returns the maximum element in an integer array. 
//The function should return 0 if the size parameter, n, is less than 1.


#include <iostream>

int max_element(int array[], int n);

int max_element(int array[], int n){
    int max = array[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (max < array[i])
        {
        max = array[i];    /* code */
        }
    }
    return max;
}