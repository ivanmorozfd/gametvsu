//
// Created by ivan on 05.04.2021.
//

#include "Monster3.h"
static size_t s_nAttackCount = 0 ;

Monster3::Monster3(const std::string &name, int health, int damage) : BaseMonster(name, health, damage) {}

void Monster3::Attack(IEntity &other) {
    std::cout << "\n\nMonster3 with name "
              << GetName()
              << " Attacks Player with name "
              << other.GetName();


    const auto monster_damage = s_nAttackCount == 2  ?  GetDamage()  : 0;

    if(s_nAttackCount == 2 )
        s_nAttackCount = 0;

    std::cout << " And deal "
              << monster_damage
              << " Damage";

    other.ReduceHealth(monster_damage);

    std::cout << "\nMob health points "
              << GetHealth()
              << "\nCurrent Player health points "
              << other.GetHealth();
}
