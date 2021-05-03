//
// Created by ivan on 04.04.2021.
//

#ifndef GAMETVSU_SCHEMA_H
#define GAMETVSU_SCHEMA_H
#include <random>
#include <chrono>

#include "entities/Player.h"
#include "entities/Monster1.h"
#include "entities/Monster2.h"

class Schema {
public:
    void run() const;
public:
    int difficulty;
    void SetDifficulty(int dfclt) { difficulty = dfclt;}
};


#endif //GAMETVSU_SCHEMA_H
