//
// Created by ivan on 04.04.2021.
//

#include "BaseMonster.h"

int BaseMonster::GetHealth() const {
    return _health;
}

void BaseMonster::SetHealth(const int &health) {
   _health = health;
}

void BaseMonster::ReduceHealth(const int &health) {
    _health -= health;
}

void BaseMonster::IncrHealth(const int &health) {
    _health += health;
}

const std::string &BaseMonster::GetName() const {
    return _name;
}

void BaseMonster::SetName(t_str name) {
    _name = name;
}

int BaseMonster::GetDamage() const {
    return _damage;
}

void BaseMonster::SetDamage(const int &dmg) {
    _damage = dmg;
}

bool BaseMonster::IsAlive() const {
    return _health > 0;
}

BaseMonster::BaseMonster(const std::string &name, int health, int damage) : _name(name), _health(health),
                                                                            _damage(damage) {

}
