/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Gun class
 */

bool Gun::upgrade() {
    return true;
};

uint Autobot::getRange() {
    return _range;
};

void Autobot::setRange(uint range) {
    _range=range;
};

uint Autobot::getDamage() {
    return _damage;
};

void Autobot::setDamage(uint damage) {
    _damage=damage;
};
