//
// Created by ivan on 02.05.2021.
//

#ifndef GAMETVSU_HARDFACTORY_H
#define GAMETVSU_HARDFACTORY_H
#include "MonsterFactory.h"

#include "../entities/Monster1.h"
#include "../entities/Monster2.h"
#include "../entities/Monster3.h"

#include "utils/randomgen.h"

class HardFactory : public MonsterFactory {
public:
    IEntity *CreateMonster() override {
        srand(time(NULL));

        int probability = randNum() % 100;

        if (probability <= 5) {
            return new Monster3("Monster3",50,120);
        }
        else if (probability <= 30) {
            return new Monster2("Monster2",25,51);
        }
        return new Monster1("Monster1",20,25);
    }
};

#endif //GAMETVSU_HARDFACTORY_H
