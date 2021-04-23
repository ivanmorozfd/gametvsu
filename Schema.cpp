//
// Created by ivan on 04.04.2021.
//
#include "factory/factoryinclude.h"
#include "Schema.h"

void Schema::run() const {
    std::vector<MonsterFactory*> creators;

    Monster1Factory creatorMonster1;
    Monster2Factory creatorMonster2;
    Monster3Factory creatorMonster3;

    creators.push_back(&creatorMonster1);
    creators.push_back(&creatorMonster2);
    creators.push_back(&creatorMonster3);

    // 0 - easy , 1 hard o_O
    constexpr int l_nMonsterTypes = 3;

    size_t monster_count = difficulty == 1 ? 10 : 4;

    std::vector<IEntity*> levelMonsters;

    for(size_t i = 0 ; i < monster_count; ++ i){
        int randomPos = randNum() % l_nMonsterTypes;

        levelMonsters.push_back(creators.at(randomPos)->CreateMonster());
    }


    auto p1 = new Player(50,10,"Test");
}
