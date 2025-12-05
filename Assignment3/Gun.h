/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Gun class
 */

#ifndef Gun
#define Gun
class Gun {
public:
    bool upgrade();
    Gun();
private:
    uint _range;
    uint _damage;
};
#endif
