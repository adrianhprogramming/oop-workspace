#include <iostream>
#include <cmath>
#include <string> 

void print_binary_str(std::string decimal_number);

void print_binary_str(std::string decimal_number){
int number = std::stoi (decimal_number, nullptr, 10);
    int i = 0;
    while ((int)pow(2,i) <= number)
    {
        i++;
    }
    int base = 0;
    i = i - 1;
    if (number == (int)pow(2,i)){
    base = base + (int)pow(10,i);
        std::cout << base << std::endl;    
        return;   /* code */
    }
    base = base + (int)pow(10,i);

    int remaind3r = number - (int)pow(2,(i)); 
    for (int j = 0; j < i; j++)
    {
        if (remaind3r < (int)pow(2,(i-1-j))){
            continue;
        }
        remaind3r = remaind3r - (int)pow(2,(i-1-j));
        base = base + (int)pow(10,(i-1-j));
    }
    std::cout << base << std::endl;
    return;
}