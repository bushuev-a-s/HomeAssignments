/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Decepticon class
 */

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include "Gun.h"

class Decepticon: public Transformer {
public:
    Decepticon();
    Decepticon(Gun* gun);

    bool destroy();

    void setEvilness(int evilness);
    void setToughness(int toughness);

    int getEvilness();
    int getToughness();
private:
    int _evilness;
    int _toughness;
};
#endif
