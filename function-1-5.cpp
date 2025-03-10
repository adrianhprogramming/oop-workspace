#include <iostream>
int count_evens(int number);

int count_evens(int number){
    int evencount = 0;
    for(int i = 0; i < (number/2); i++){
        evencount = evencount + 1;
    }
    return evencount;
}
