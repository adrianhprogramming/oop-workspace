#include <iostream>

void two_five_nine(int array[], int n);

void two_five_nine(int array[], int n){
    int twofreq = 0, fivefreq = 0, ninefreq = 0;
    for (int i = 0; i < n; i++){   
        if (array[i] == 2){                
            twofreq = twofreq + 1;
        }
        else if (array[i] == 5){
            fivefreq = fivefreq + 1;
        } 
        else if (array[i] == 9){
            ninefreq = ninefreq + 1;
        }
    }
    std::cout << "2:" << twofreq << ";5:" << fivefreq << ";9:" << ninefreq << ";" << std::endl;
}