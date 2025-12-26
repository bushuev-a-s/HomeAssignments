/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Cpp file for Pilot class
 */

#include "Pilot.h"

bool Pilot::drive()
{
    return true;
};

std::string Pilot::getName()
{
    return _name;
};

void Pilot::setName(std::string name)
{
    _name=name;
};

std::string Pilot::printClass() const
{
    return "Pilot";
}

std::ostream& operator<<(std::ostream& out, const Pilot& t)
{
    out << t.printClass();
    return out;
}
