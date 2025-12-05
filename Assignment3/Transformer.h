/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for base class
 */

#ifndef Base
#define Base
class Transformer {
public:
    Transformer(uint ammo, uint level, uint exp, Gun *gun);
    Transformer();
    Transformer(Gun *gun);
    bool move();
    bool fire();
    bool transform();
    ~Transformer();
private:
    uint _ammo;
    uint _level;
    uint _exp;
    Gun *_gun;
};
#endif
