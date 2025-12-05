/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Autobot class
 */

#include "Autobot.h"

bool Autobot::ultimate() {
    return true;
};

Autobot::Autobot() {
    _size=15;
    _strength=50;
};

Autobot::Autobot(Gun *gun): Transformer(*gun), _size(15_), _strength(50) {

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
