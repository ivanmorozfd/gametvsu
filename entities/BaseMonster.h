//
// Created by ivan on 04.04.2021.
//

#ifndef GAMETVSU_BASEMONSTER_H
#define GAMETVSU_BASEMONSTER_H

#include "IEntity.h"

class BaseMonster : public virtual IEntity {
public:
    std::string _name;
    int         _health;
    int         _damage;
public:
    BaseMonster(const std::string &name, int health, int damage);

public:
    int GetHealth() const override;

    void SetHealth(const int &health) override;

    void ReduceHealth(const int &health) override;

    void IncrHealth(const int &health) override;

    const std::string &GetName() const override;

    void SetName(const std::string &name) override;

    int GetDamage() const override;

    void SetDamage(const int &dmg) override;

    bool IsAlive() const override;

    void Attack(IEntity &other) override = 0;
};


#endif //GAMETVSU_BASEMONSTER_H
