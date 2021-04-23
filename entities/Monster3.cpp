//
// Created by ivan on 05.04.2021.
//

#include "Monster3.h"

Monster3::Monster3(const std::string &name, int health, int damage) : BaseMonster(name, health, damage) {}

void Monster3::Attack(IEntity &other) {
    std::cout << "\nMonster3 with name "
              << GetName()
              << " Attacks Player with name "
              << other.GetName();

    const auto monster_damage = GetDamage();

    std::cout << " And deal "
              << monster_damage
              << " Damage";

    other.ReduceHealth(monster_damage);

    std::cout <<"\nCurrent Player health points "
              << GetHealth()
              << " Mob health points "
              << other.GetHealth();
}
