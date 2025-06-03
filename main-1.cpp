#include <cstdlib>
#include <tuple>
#include <iostream>
#include <cmath>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main(){
int xdimension = 100;
int ydimension = 100;

std::cout <<

utils::calculateDistance(
    utils::generateRandomPos(xdimension,ydimension),
    utils::generateRandomPos(xdimension,ydimension)
)
<< std::endl;
return 0;    
};
