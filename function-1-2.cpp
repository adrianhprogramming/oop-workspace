#include <iostream>
#include <cmath>
#include <string>

int is_identity(int array[10][10]);

int is_identity(int array[10][10]){    
int callback = 1;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){ 
            if (i==j){
                if (array[i][j] != 1){
                    callback = 0;
                    return callback;
                }
            } else if (array[i][j] != 0){
                callback = 0;
                return callback;
            }
        }
    }
    return callback; 
}

