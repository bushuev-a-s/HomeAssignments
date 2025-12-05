/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 3
 * Header file for Autobot class
 */

#ifndef Autobot
#define Autobot
class Autobot: public Transformer {
public:
    Autobot();
    Autobot(Gun *gun);
    bool ultimate();
private:
    uint _size;
    uint _strength;
};
#endif
