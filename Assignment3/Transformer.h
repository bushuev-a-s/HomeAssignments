/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for base class
 */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Gun.h"
#include <string>

class Transformer
{
public:
    Transformer(int ammo, int level, int exp, Gun* gun);
    Transformer();
    Transformer(Gun* gun);

    bool move();
    bool fire();
    virtual bool transform() = 0;

    void setAmmo(int ammo);
    void setLevel(int level);
    void setExp(int exp);
    void setGun(Gun* gun);

    int getAmmo();
    int getLevel();
    int getExp();
    Gun* getGun();

    virtual std::string printClass() const = 0;

    friend std::ostream& operator<<(std::ostream& out, const Transformer& t) {
        out << t.printClass();
        return out;
    }

    virtual ~Transformer() = default;
private:
    int _ammo;
    int _level;
    int _exp;
    Gun* _gun;
};
#endif
