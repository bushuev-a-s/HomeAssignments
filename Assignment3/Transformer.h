/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for base class
 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Gun.h"

class Transformer {
public:
    Transformer(int ammo, int level, int exp, Gun* gun);
    Transformer();
    Transformer(Gun* gun);

    bool move();
    bool fire();
    bool transform();

    void setAmmo(int ammo);
    void setLevel(int level);
    void setExp(int exp);
    void setGun(Gun* gun);

    int getAmmo();
    int getLevel();
    int getExp();
    Gun* getGun();

    ~Transformer();
private:
    int _ammo;
    int _level;
    int _exp;
    Gun* _gun;
};
#endif
