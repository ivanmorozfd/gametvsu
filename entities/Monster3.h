//
// Created by ivan on 05.04.2021.
//

#ifndef GAMETVSU_MONSTER3_H
#define GAMETVSU_MONSTER3_H
#include "BaseMonster.h"

class Monster3 : public BaseMonster {
public:
    void Attack(IEntity &other) override;

public:
    Monster3(const std::string &name, int health, int damage);
};


#endif //GAMETVSU_MONSTER3_H
