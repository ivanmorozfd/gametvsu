//
// Created by ivan on 19.04.2021.
//

#ifndef GAMETVSU_MONSTERFACTORY_H
#define GAMETVSU_MONSTERFACTORY_H
class IEntity;
class MonsterFactory{
public:
    virtual IEntity* CreateMonster() = 0;
};

#endif //GAMETVSU_MONSTERFACTORY_H
