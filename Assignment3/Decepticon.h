/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Decepticon class
 */

#ifndef Decepticon
#define Decepticon
class Decepticon: public Transformer {
public:
    Decepticon();
    bool destroy();
private:
    uint _evilness;
    uint _toughness;
};
#endif
