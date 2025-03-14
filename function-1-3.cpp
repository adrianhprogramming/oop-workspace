#include <iostream>
#include <cmath>
#include <string>

void count_digits(int array[4][4]);

void count_digits(int array[4][4]){
int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0, freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;     
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){ 
            if (array[i][j] == 0){                
                freq0 = freq0 + 1;
            }
            else if (array[i][j] == 1){                
                freq1 = freq1 + 1;
            } 
            else if (array[i][j] == 2){                
                freq2 = freq2 + 1;
            }
            else if (array[i][j] == 3){                
                freq3 = freq3 + 1;
            }  
            else if (array[i][j] == 4){                
                freq4 = freq4 + 1;
            }
            else if (array[i][j] == 5){                
                freq5 = freq5 + 1;
            }  
            else if (array[i][j] == 6){                
                freq6 = freq6 + 1;
            } 
            else if (array[i][j] == 7){                
                freq7 = freq7 + 1;
            } 
            else if (array[i][j] == 8){                
                freq8 = freq8 + 1;
            } 
            else if (array[i][j] == 9){                
                freq9 = freq9 + 1;
            } 
        }
    }
    std::cout 
    << "0:" << freq0
    << ";1:" << freq1
    << ";2:" << freq2
    << ";3:" << freq3
    << ";4:" << freq4
    << ";5:" << freq5
    << ";6:" << freq6
    << ";7:" << freq7
    << ";8:" << freq8
    << ";9:" << freq9 << ";" << std::endl;    
}


