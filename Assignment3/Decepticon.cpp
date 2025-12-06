/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Decepticon class
 */

#include "Decepticon.h"

bool Decepticon::destroy() {
    return true;
}

Decepticon::Decepticon(): _evilness(50), _toughness(15) {}

Decepticon::Decepticon(Gun* gun): Transformer(gun), _evilness(50), _toughness(15) {}

int Decepticon::getEvilness() {
    return _evilness;
}

void Decepticon::setEvilness(int evilness) {
    _evilness=evilness;
}

int Decepticon::getToughness() {
    return _toughness;
}

void Decepticon::setToughness(int toughness) {
    _toughness=toughness;
}
