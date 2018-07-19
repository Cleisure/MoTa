#ifndef MONSTER_H
#define MONSTER_H

#include "widget.h"
#include "block.h"
#include "hero.h"

class Block;
class Hero;
class Monster:public Block
{
public:

     Monster(int id);
     void action(Hero *hero);
private:
     int id,life,attack,defence,money,experience;
};

#endif // MONSTER_H
