/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for base class
 */

bool Transformer::move() {
    return true;
};

bool Transformer::fire() {
    return true;
};

bool Transformer::transform() {
    return true;
};

Transformer::Transformer() {

};

Transformer::~Transformer() {

};

uint Transformer::getAmmo() {
    return _ammo;
};

void Transformer::setAmmo(uint ammo) {
    _ammo=ammo;
};

uint Transformer::getLevel() {
    return _level;
};

void Transformer::setLevel(uint level) {
    _level=level;
};

uint Transformer::getExp() {
    return _exp;
};

void Transformer::setExp(uint exp) {
    _exp=exp;
};

Gun Transformer::getGun() {
    return *_gun;
};

void Transformer::setGun(uint *gun) {
    *_gun=*gun;
};
