//
// Created by ivan on 04.04.2021.
//

#include "Monster2.h"

void Monster2::Attack(IEntity &other) {
    std::cout << "\n\nMonster2 with name "
              << GetName()
              << " Attacks Player with name "
              << other.GetName();



    const auto player_damage = GetDamage();

    std::cout << " And deal "
              << player_damage
              << " Damage";

    other.ReduceHealth(player_damage);

    std::cout << "\nMob health points "
              << GetHealth()
              << "\nCurrent Player health points "
              << other.GetHealth();
}

Monster2::Monster2(const std::string &name, int health, int damage) : BaseMonster(name, health, damage) {

}
