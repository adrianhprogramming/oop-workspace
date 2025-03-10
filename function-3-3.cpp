#include <iostream>

double weighted_average(int array[], int n);

double weighted_average(int array[], int n){
    double sum = 0, waverage = 0;   
    for (int i = 0; i < n; i++){   
        int freq = 0;
        for (int j = 0; j < n; j++){            
            if (array[i] == array[j]){                
                freq = freq + 1;
            }
        } 
        sum = sum + array[i]*(freq/(double)n);  //observe (double)n which allows floating point division, without it the integer division would return 0.
    }
    return sum;
}


