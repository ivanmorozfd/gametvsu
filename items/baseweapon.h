//
// Created by ivan on 05.04.2021.
//

#ifndef GAMETVSU_BASEWEAPON_H
#define GAMETVSU_BASEWEAPON_H

#include "IItem.h"

class BaseWeapon : public IItem {
public:
    enum class EWeaponType
    {
        STAFF,
        BOW,
        SWORD
    };
    int GetDamage() const override;

    int GetHealth() const override;

    const std::string &GetName() const override;

private:
    int _damage;
    int _health;
    std::string _name;
};


#endif //GAMETVSU_BASEWEAPON_H
