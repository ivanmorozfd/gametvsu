//
// Created by ivan on 04.04.2021.
//

#ifndef GAMETVSU_MONSTER2_H
#define GAMETVSU_MONSTER2_H

#include "BaseMonster.h"
#include "random"

class Monster2 : public BaseMonster {
public:
    Monster2(const std::string &name, int health, int damage);

    void Attack(IEntity &other) override;
};


#endif //GAMETVSU_MONSTER2_H
