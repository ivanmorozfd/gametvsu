//
// Created by ivan on 04.04.2021.
//

#include "Player.h"

int Player::GetHealth() const {
    return _health;
}

void Player::SetHealth(const int &health) {
    _health = health;
}

void Player::ReduceHealth(const int &health) {
    _health -= health;
}

void Player::IncrHealth(const int &health) {
    _health += health;
}

const std::string &Player::GetName() const {
    return _name;
}

void Player::SetName(const std::string &name) {
    _name = name;
}

int Player::GetDamage() const {
    return _damage;
}

void Player::SetDamage(const int &dmg) {
    _damage = dmg;
}

bool Player::IsAlive() const {
    return _health > 0;
}

void Player::Attack(IEntity &other) {
    std::cout << "\nPlayer with name "
                << GetName()
                << " Attacks Monster with name "
                << other.GetName();

    const auto player_damage = GetDamage();
    std::cout << " And deal "
              << player_damage
              << " Damage";

    other.ReduceHealth(player_damage);

    std::cout <<"\nCurrent Player health points "
                    << GetHealth()
                    << " Mob health points "
                    << other.GetHealth();
}

Player::Player(int health, int damage, const std::string &name) : _health(health), _damage(damage), _name(name) {

}
