//
// Created by ivan on 04.04.2021.
//

#ifndef GAMETVSU_PLAYER_H
#define GAMETVSU_PLAYER_H
#include "IEntity.h"

class Player : public IEntity{
private:
    int _health;
    int _damage;
    std::string _name;
public:
    Player(int health, int damage, const std::string &name);
enum class EPlayerClass
{
    WAR,
    MAGE,
    HUNTER
};
public:
    int GetHealth() const override;

    void SetHealth(const int &health) override;

    void ReduceHealth(const int &health) override;

    bool IsAlive() const override;

    void IncrHealth(const int &health) override;

    const std::string &GetName() const override;

    void Attack(IEntity &other) override;

    void SetName(const std::string &name) override;

    int GetDamage() const override;

    void SetDamage(const int &dmg) override;
};


#endif //GAMETVSU_PLAYER_H
