//
// Created by ivan on 04.04.2021.
//
#include "factory/factoryinclude.h"
#include "Schema.h"
#include "factory/factoryinclude.h"
void Schema::run() const {


    // 0 - easy , 1 hard o_O
    constexpr int l_nMonsterTypes = 3;

    MonsterFactory* factory;

    switch (difficulty)
    {
        case 1:{
            factory = new EasyFactory();
            break;
        }
        case 2: {
            factory = new HardFactory();
            break;
        }

        default: {
            factory = new EasyFactory();
            break;
        }
    }


    std::vector<IEntity*> levelMonsters;

    size_t nMobCount = difficulty == 0 ? 10 : 20;

    for(size_t i = 0 ; i < nMobCount ; ++i )
        levelMonsters.push_back(factory->CreateMonster());

    IEntity* currentMonster;

    auto p1 = new Player(500,15,"Test");

    size_t it = 0;
    while(p1->IsAlive() && it  < levelMonsters.size()) {
        currentMonster = levelMonsters.at(it);

        p1->Attack(*currentMonster);
        if(currentMonster->IsAlive())
            currentMonster->Attack(*p1);
        else
            ++it;
    }
}
