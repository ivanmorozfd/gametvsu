cmake_minimum_required(VERSION 3.17)
project(gametvsu)

set(CMAKE_CXX_STANDARD 14)

add_executable(gametvsu main.cpp entities/IEntity.h entities/Player.cpp entities/Player.h entities/BaseMonster.cpp entities/BaseMonster.h entities/Monster1.cpp entities/Monster1.h entities/Monster2.cpp entities/Monster2.h Schema.cpp Schema.h entities/Monster3.cpp entities/Monster3.h items/IItem.h items/baseweapon.cpp items/baseweapon.h items/basearmour.cpp items/basearmour.h factory/MonsterFactory.h factory/factoryinclude.h factory/easyfactory.h factory/hardfactory.h utils/randomgen.h)