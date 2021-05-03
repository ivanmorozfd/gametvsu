//
// Created by ivan on 04.04.2021.
//

#include "Monster1.h"

void Monster1::Attack(IEntity &other) {
    std::cout << "\n\nMonster1 with name "
              << GetName()
              << " Attacks Player with name "
              << other.GetName();

    const auto monster_damage = GetHealth() > 10 ? GetDamage() : GetDamage() + 10;

    std::cout << " And deal "
              << monster_damage
              << " Damage";

    other.ReduceHealth(monster_damage);

    std::cout << "\nMob health points "
              << GetHealth()
              << "\nCurrent Player health points "
              << other.GetHealth();
}

Monster1::Monster1(const std::string &name, int health, int damage) : BaseMonster(name, health, damage) {

}
