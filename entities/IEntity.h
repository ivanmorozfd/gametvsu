//
// Created by ivan on 04.04.2021.
//

#ifndef GAMETVSU_IENTITY_H
#define GAMETVSU_IENTITY_H

#include "string"
#include "iostream"

class IEntity {
public:
    typedef const std::string& t_str;

    virtual int   GetHealth() const = 0;
    virtual void  SetHealth(const int& health) = 0;
    virtual void  ReduceHealth(const int& health) = 0;
    virtual void  IncrHealth(const int& health) = 0;

    virtual t_str GetName() const = 0;
    virtual void  SetName(t_str name)  = 0;


    virtual int   GetDamage() const = 0;
    virtual void  SetDamage( const int& dmg) = 0;

    virtual bool  IsAlive() const = 0;

    virtual void  Attack(IEntity& other) = 0;
};


#endif //GAMETVSU_IENTITY_H
