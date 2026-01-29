/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Gun class
 */

#ifndef GUN_H
#define GUN_H

#include <string>

class Gun
{
public:
    bool upgrade();
    void setRange(int range);
    void setDamage(int damage);
    int getRange();
    int getDamage();
    //Gun();

    std::string printClass() const;
private:
    int _range;
    int _damage;
};
#endif
