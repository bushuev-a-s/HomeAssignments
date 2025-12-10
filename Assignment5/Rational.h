/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 5
 */

#include "Gcd.h"

#ifndef RATIONAL_H
#define RATIONAL_H
class Rational {
public:
    Rational(int numerator, int denominator):
        _numerator(numerator/gcd(numerator,denominator)), _denominator(denominator/gcd(numerator,denominator)) {}

    int getNumerator() {
        return _numerator;
    }

    int getDenominator() {
        return _denominator;
    }

    Rational operator+(Rational other) {
        return result(_numerator*other.getDenominator+other.getNumerator*_denominator,
        _denominator*other.getDenominator);
    }

    Rational operator*(Rational other) {
        return result(_numerator*other.getNumerator,_denominator*other.getDenominator);
    }

    Rational operator*(int other) {
        return result(_numerator*other,_denominator);
    }

    Rational operator=(int other) {
        return result(other,1)
    }
private:
    int _numerator;
    int _denominator;
};
#endif
