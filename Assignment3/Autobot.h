/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Autobot class
 */

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"
#include "Gun.h"

class Autobot: public Transformer {
public:
    Autobot();
    Autobot(Gun *gun);

    bool ultimate();

    void setSize(int size);
    void setStrength(int strength);

    int getSize();
    int getStrength();
private:
    uint _size;
    uint _strength;
};
#endif
