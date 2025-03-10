#include <iostream>

int num_count(int array[], int n, int number);

int num_count(int array[], int n, int number){
int freq = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            freq = freq + 1;
       }
    }
return freq;
}
