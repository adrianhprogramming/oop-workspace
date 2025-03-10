#include <iostream>

double array_mean(int array[], int n);

double array_mean(int array[], int n){
    int sum = 0;
    double mean = 0;
    for(int i = 0; i < n; i++){
        sum = sum + array[i];
    }
    mean = (double)sum/(double)n;
    return mean;
}