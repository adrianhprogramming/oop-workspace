#ifndef GAMEENTITY.H
#define GAMEENTITY.H

#include <iostream>

class GameEntity{
    enum GameEntityType {ExplosionType = 0, MineType = 1, NoneType = 2, ShipType = 3};

    private:
    GameEntityType type;
    std::tuple<int, int> position;

    public:
    GameEntity(int x, int y, char type);
    std::tuple<int,int> getpos();
    GameEntityType getType;

};
#endif