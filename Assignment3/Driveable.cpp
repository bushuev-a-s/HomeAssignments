/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Driveable class
 */

#include "Driveable.h"

bool Driveable::obey() {
    return true;
};

Driveable::Driveable() {
    _seats=4;
    _pilot=Pilot pilot();
};

Driveable::Driveable(Gun *gun): Autobot(*gun), _seats(4), _pilot(Pilot pilot()) {

};

uint Driveable::getSeats() {
    return _seats;
};

void Driveable::setSeats(uint seats) {
    _seats=seats;
};

Pilot Driveable::getPilot() {
    return _pilot;
};

void Driveable::setPilot(Pilot pilot) {
    _pilot=pilot;
};
