//
// Created by ivan on 19.04.2021.
//

#ifndef GAMETVSU_MONSTER3FACTORY_H
#define GAMETVSU_MONSTER3FACTORY_H

#include "../entities/Monster3.h"

class Monster3Factory : public MonsterFactory {
public:
    IEntity* CreateMonster() override {
        return new Monster3("Monster1",50,10);
    }
};

#endif //GAMETVSU_MONSTER3FACTORY_H
