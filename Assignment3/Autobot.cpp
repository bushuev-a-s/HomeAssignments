/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Autobot class
 */

bool Autobot::ultimate() {
    return true;
};

Autobot::Autobot() {

};

uint Autobot::getStrength() {
    return _strength;
};

void Autobot::setStrength(uint strength) {
    _strength=strength;
};

uint Autobot::getSize() {
    return _size;
};

void Autobot::setSize(uint size) {
    _size=size;
};
