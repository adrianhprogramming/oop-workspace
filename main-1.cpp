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

Utils::calculateDistance(
    Utils::generateRandomPos(xdimension,ydimension),
    Utils::generateRandomPos(xdimension,ydimension)
)
<< std::endl;
return 0;    
};
