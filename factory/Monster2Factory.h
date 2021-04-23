//
// Created by ivan on 19.04.2021.
//

#ifndef GAMETVSU_MONSTER2FACTORY_H
#define GAMETVSU_MONSTER2FACTORY_H
#include "../entities/Monster2.h"
class Monster2;
class Monster2Factory : public MonsterFactory {
public:
    IEntity* CreateMonster() override {
        return new Monster2("Monster2",50,10);
    }
};

#endif //GAMETVSU_MONSTER2FACTORY_H
