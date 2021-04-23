//
// Created by ivan on 04.04.2021.
//

#ifndef GAMETVSU_MONSTER1_H
#define GAMETVSU_MONSTER1_H

#include "BaseMonster.h"

class Monster1 : public BaseMonster {
public:
    void Attack(IEntity &other) override;

    Monster1(const std::string &name, int health, int damage);
};


#endif //GAMETVSU_MONSTER1_H
