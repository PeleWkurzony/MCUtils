//
// Created by Pele on 16.07.2023.
//
#ifndef CLIONTEST_MCUTILS_H
#define CLIONTEST_MCUTILS_H

#define BIT_SET(reg, bit) (reg |= (1 << bit))
#define BIT_RESET(reg, bit) (reg &= ~(1 << bit))
#define BIT_TOGGLE(reg, bit) (reg ^= (1 << bit))
#define BIT_CHECK(reg, bit) (reg & (1 << bit))

#endif //CLIONTEST_MCUTILS_H
