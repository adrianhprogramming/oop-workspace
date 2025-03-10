#include <iostream>

int min_element(int array[], int n);

int min_element(int array[], int n){
    int min = array[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (min > array[i])
        {
        min = array[i];    /* code */
        }
    }
return min;
}