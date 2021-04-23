//
// Created by ivan on 19.04.2021.
//

#ifndef GAMETVSU_MONSTER1FACTORY_H
#define GAMETVSU_MONSTER1FACTORY_H


#include "MonsterFactory.h"
#include "../entities/Monster1.h"

class Monster1Factory : public MonsterFactory {
public:
    IEntity* CreateMonster() override {
        return new Monster1("Monster1",50,10);
    }
};

#endif //GAMETVSU_MONSTER1FACTORY_H
