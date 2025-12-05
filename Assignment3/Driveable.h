/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Driveable autobot class
 */

#ifndef Driveable
#define Driveable
class Driveable: public Autobot {
public:
    Driveable(uint _seats, Pilot pilot);
    Driveable();
    bool obey();
private:
    uint _seats;
    Pilot _pilot;
};
#endif
