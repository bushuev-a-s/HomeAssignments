/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Driveable autobot class
 */

#ifndef DRIVEABLE_H
#define DRIVEABLE_H

#include "Pilot.h"

class Driveable: public Autobot {
public:
    Driveable(Gun *gun);
    Driveable();

    bool obey();

    void setSeats(int evilness);
    void setPilot(Pilot pilot);

    int getSeats();
    Pilot getPilot();
private:
    uint _seats;
    Pilot _pilot;
};
#endif
