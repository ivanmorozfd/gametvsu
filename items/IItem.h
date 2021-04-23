//
// Created by ivan on 05.04.2021.
//

#ifndef GAMETVSU_IITEM_H
#define GAMETVSU_IITEM_H

#include "string"

class IItem{
public:
    virtual int GetDamage() const = 0;
    virtual int GetHealth() const = 0;
    virtual const std::string& GetName() const = 0;
};
#endif //GAMETVSU_IITEM_H
