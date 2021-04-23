//
// Created by ivan on 05.04.2021.
//

#ifndef GAMETVSU_BASEARMOUR_H
#define GAMETVSU_BASEARMOUR_H

#include "IItem.h"

class BaseArmour : public IItem {
public:
    enum class EArmourType {
        LEATHER,
        HELMET,
        BOOTS,
        GLOVES
    };
};


#endif //GAMETVSU_BASEARMOUR_H
