#ifndef EFFECT
#define EFFECT
#include "GameEntity.h"
#include <cstdlib>
#include <tuple>
#include <iostream>
#include <cmath>

class Effect{
public:
virtual void apply(GameEntity& entity) = 0;
};

#endif // EFFECT