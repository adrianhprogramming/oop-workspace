#include <iostream>
#include <cmath>
#include <string> 

int sum_min_max(int integers[], int length);

int array_min(int integers[], int length);

int array_max(int integers[], int length);

int sum_min_max(int integers[], int length){
    int n = length;
    if(n < 1){
        int max = -1; 
        return max;
    }
    int sum = array_min(integers, length) + array_max(integers, length);
    return sum;
}

int array_min(int integers[], int length){
    int n = length;
    if(n < 1){
        int max = -1; 
        return max;
    }
    int min = integers[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (min > integers[i])
        {
            min = integers[i];    /* code */
        }
    }
    return min;    
}

int array_max(int integers[], int length){
    int n = length;
    if(n < 1){
        int max = -1; 
        return max;
    }
    int max = integers[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (max < integers[i])
        {
        max = integers[i];    /* code */
        }
    }
    return max;
}
 