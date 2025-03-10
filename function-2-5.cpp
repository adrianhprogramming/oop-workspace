#include <iostream>
//2-4.  Write a function that given an array of integers and its length, will determine if the elements are in ascending order or not, that is,
// each element is greater than or equal to the previous element. 
//The function must return true if in the size parameter is greater than 0 and the elements are in ascending order, otherwise it must return false.

bool is_descending(int array[], int n);

int main(){
    int array[] = {};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout << std::boolalpha;
    std::cout << is_descending(array, n)  << std::endl;
    return 0;
}

bool is_descending(int array[], int n){
    bool descending = true;
    int i;
    if (n == 0)
    {
    return false;
    }
    for (i = 0; i < n; i++)
    {
            if (array[i]<array[i+1])
                {
                return false;
                break;    
                }
    }    
    return descending;
}




    