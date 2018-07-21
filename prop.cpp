#include "prop.h"
#include "hero.h"

Prop::Prop(int num) //sorts of props
{
    id = num;
    /*
     * 1 sward add 10Att
     * 2 shield add10Def
     * 3 medicine add 200Hp
     * 4 G key add 1 Gkey
     * 5 B key add 1 Bkey
     * 6 R key add 1 Rkey
     */

    switch (id) {
    case 1://sward
        addAtt=10;
        pix= new QPixmap(":/myMonster/monster0.png");
        pix->scaledToHeight(40);
        this->setWindowFlags(Qt::Widget | Qt::FramelessWindowHint |
                            Qt::WindowSystemMenuHint | Qt::WindowStaysOnTopHint);
        break;
    case 2://shield
        addDef=10;
        pix= new QPixmap(":/myMonster/monster0.png");
        pix->scaledToHeight(40);
        this->setWindowFlags(Qt::Widget | Qt::FramelessWindowHint |
                            Qt::WindowSystemMenuHint | Qt::WindowStaysOnTopHint);
        break;
    case 3://medic
        addHp=10;
        pix= new QPixmap(":/myMonster/monster0.png");
        pix->scaledToHeight(40);
        this->setWindowFlags(Qt::Widget | Qt::FramelessWindowHint |
                            Qt::WindowSystemMenuHint | Qt::WindowStaysOnTopHint);
        break;
    case 4://Gkey
        addGKey=1;
        pix= new QPixmap(":/myMonster/monster0.png");
        pix->scaledToHeight(40);
        this->setWindowFlags(Qt::Widget | Qt::FramelessWindowHint |
                            Qt::WindowSystemMenuHint | Qt::WindowStaysOnTopHint);
        break;
    case 5://Bkey
        addBKey=1;
        pix= new QPixmap(":/myMonster/monster0.png");
        pix->scaledToHeight(40);
        this->setWindowFlags(Qt::Widget | Qt::FramelessWindowHint |
                            Qt::WindowSystemMenuHint | Qt::WindowStaysOnTopHint);
        break;
    case 6://Rkey
        addRKey=1;
        pix= new QPixmap(":/myMonster/monster0.png");
        pix->scaledToHeight(40);
        this->setWindowFlags(Qt::Widget | Qt::FramelessWindowHint |
                            Qt::WindowSystemMenuHint | Qt::WindowStaysOnTopHint);
        break;
    default:
        break;
    }
}

bool Prop::action(Hero* hero)
{
    hero->setLife(hero->getLife()+addHp);
    hero->setAtt(hero->getAtt()+addAtt);
    hero->setDef(hero->getDef()+addDef);
    hero->setGKey(hero->getGKey()+addGKey);
    hero->setBKey(hero->getBKey()+addBKey);
    hero->setRKey(hero->getRKey()+addRKey);

    return false;
}

