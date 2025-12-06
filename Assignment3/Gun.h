/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Gun class
 */

#ifndef GUN_H
#define GUN_H
class Gun {
public:
    bool upgrade();
    void setRange(int range);
    void setDamage(int damage);
    int getRange();
    int getDamage();
    //Gun();
private:
    int _range;
    int _damage;
};
#endif
