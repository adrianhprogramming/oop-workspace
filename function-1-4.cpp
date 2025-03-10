#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n);

int sum_two_arrays(int array[], int secondarray[], int n){
int a1sum = 0, a2sum = 0, sum;
    for (int i = 0; i < n ; i++){
        a1sum = a1sum + array[i];
        a2sum = a2sum + secondarray[i];            
}
sum = a1sum + a2sum;
return sum;
}