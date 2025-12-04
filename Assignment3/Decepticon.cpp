/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Decepticon class
 */

bool Decepticon::destroy() {
    return true;
};

Decepticon::Decepticon() {

};

uint Decepticon::getEvilness() {
    return _evilness;
};

void Decepticon::setEvilness(uint evilness) {
    _evilness=evilness;
};

uint Decepticon::getToughness() {
    return _toughness;
};

void Decepticon::setToughness(uint toughness) {
    _toughness=toughness;
};
