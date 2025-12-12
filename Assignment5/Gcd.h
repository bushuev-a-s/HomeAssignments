/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 5
 */

#ifndef GCD_H
#define GCD_H
int gcd(int a, int b) {
    if (a==0) {
        return b;
    }
    if (a<0) {
        return gcd(-a,b);
    }
    if (b<0) {
        return -gcd(a,-b);
    }
    int remainder;
    while (b!=0) {
        remainder=a%b;
        a=b;
        b=remainder;
    }
    return a;
};
#endif
