/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for base class
 */

#include "Transformer.h"
#include "Gun.h"

bool Transformer::move() {
    return true;
}

bool Transformer::fire() {
    return true;
}

bool Transformer::transform() {
    return true;
}

Transformer::Transformer(int ammo, int level, int exp, Gun* gun)
    : _ammo(ammo), _level(level), _exp(exp), _gun(gun) {}

Transformer::Transformer()
    : _ammo(100), _level(10), _exp(300), _gun(nullptr) {}

Transformer::Transformer(Gun* gun)
    : _ammo(100), _level(10), _exp(300), _gun(gun) {}

Transformer::~Transformer() {}

int Transformer::getAmmo() {
    return _ammo;
}

void Transformer::setAmmo(int ammo) {
    _ammo=ammo;
}

int Transformer::getLevel() {
    return _level;
}

void Transformer::setLevel(int level) {
    _level=level;
}

int Transformer::getExp() {
    return _exp;
}

void Transformer::setExp(int exp) {
    _exp=exp;
}

Gun* Transformer::getGun() {
    return _gun;
}

void Transformer::setGun(Gun* gun) {
    _gun=gun;
}
