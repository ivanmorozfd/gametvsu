//
// Created by ivan on 05.04.2021.
//

#include "baseweapon.h"

int BaseWeapon::GetDamage() const {
    return _damage;
}

int BaseWeapon::GetHealth() const {
    return _health;
}

const std::string &BaseWeapon::GetName() const {
    return _name;
}
