#ifndef GAMEENTITY
#define GAMEENTITY
//Needs to be included so that the compiler knows what tuple is
#include <cstdlib>
#include <tuple>
#include <iostream>
#include <cmath>

class GameEntity{
    enum GameEntityType {ExplosionType = 0, MineType = 1, NoneType = 2, ShipType = 3};

    private:
    std::tuple<int, int> position;
    GameEntityType type;


    public:
    GameEntity(int x, int y, char type);
    std::tuple<int,int> getpos();
    GameEntityType getType;

};
#endif // GAMEENTITY