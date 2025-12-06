/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Pilot class
 */

#include <string>

#ifndef PILOT_H
#define PILOT_H
class Pilot{
public:
    bool drive();
    std::string getName();
    void setName(std::string);
private:
    std::string _name;
};
#endif
