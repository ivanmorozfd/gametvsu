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

static int randNum() {
    std::random_device rd;
    // seed value is designed specifically to make initialization
    // parameters of std::mt19937 (instance of std::mersenne_twister_engine<>)
    // different across executions of application
    std::mt19937::result_type seed = rd() ^ (
            (std::mt19937::result_type)
                    std::chrono::duration_cast<std::chrono::seconds>(
                            std::chrono::system_clock::now().time_since_epoch()
                    ).count() +
            (std::mt19937::result_type)
                    std::chrono::duration_cast<std::chrono::microseconds>(
                            std::chrono::high_resolution_clock::now().time_since_epoch()
                    ).count());

    std::mt19937 gen(seed);
    std::mt19937::result_type n;

    for (unsigned long j = 0; j < 3; ++j)
    {
        // reject readings that would make n%6 non-uniformly distributed
        while ((n = gen()) > std::mt19937::max() -
                             (std::mt19937::max() - 5) % 3)
        { /* bad value retrieved so get next one */
        }

    }
    return n;
}

class Schema {
public:
    void run() const;
public:
    int difficulty;
    void SetDifficulty(int dfclt) { difficulty = dfclt;}
};


#endif //GAMETVSU_SCHEMA_H
