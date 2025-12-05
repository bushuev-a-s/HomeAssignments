/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Decepticon class
 */

#include "Decepticon.h"

bool Decepticon::destroy() {
    return true;
};

Decepticon::Decepticon() {
    _toughness=15;
    _evilness=50;
};

Decepticon::Decepticon(Gun *gun): Transformer(*gun), _toughness(15_), _evilness(50) {

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
