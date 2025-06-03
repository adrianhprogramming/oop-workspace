#ifndef EFFECT.H
#define EFFECT.H
#include "GameEntity.h"

class Effect{
public:
virtual void apply(GameEntity& entity) = 0;
};

#endif