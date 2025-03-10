#include <iostream>
extern int count_evens(int number);

int main(){
    int number = 10;
    count_evens(number);
    std::cout << count_evens(number)  << std::endl;
}