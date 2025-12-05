/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Gun class
 */

#include "Gun.h"

bool Gun::upgrade() {
    return true;
};
/*
Gun::Gun() {
    _range=7;
    _damage=5;
};
*/
uint Gun::getRange() {
    return _range;
};

void Gun::setRange(uint range) {
    _range=range;
};

uint Gun::getDamage() {
    return _damage;
};

void Gun::setDamage(uint damage) {
    _damage=damage;
};
