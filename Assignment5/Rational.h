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

    Rational(int num): _numerator(num), _denominator(1) {}

    Rational() {}

    int getNumerator() const {
        return _numerator;
    }

    int getDenominator() const {
        return _denominator;
    }

    Rational operator+(const Rational& other) const {
        return Rational(_numerator*other.getDenominator()+other.getNumerator()*_denominator,
        _denominator*other.getDenominator());
    }

    void operator+=(const Rational& other) {
        _numerator=_numerator*other.getDenominator()+other.getNumerator()*_denominator;
        _denominator=_denominator*other.getDenominator();
        int g=gcd(_numerator, _denominator);
        _numerator=_numerator/g;
        _denominator=_denominator/g;
    }

    Rational operator-(const Rational& other) const {
        return Rational(_numerator*other.getDenominator()-other.getNumerator()*_denominator,
        _denominator*other.getDenominator());
    }

    Rational operator-() const {
        return Rational(-_numerator,_denominator);
    }

    Rational operator*(const Rational& other) const {
        return Rational(_numerator*other.getNumerator(),_denominator*other.getDenominator());
    }

    Rational operator*(int other) const {
        return Rational(_numerator*other,_denominator);
    }

    void operator=(int other) {
        _numerator=other;
        _denominator=1;
    }

    bool operator==(const Rational& other) const {
        return (_numerator==other.getNumerator() && _denominator==other.getDenominator());
    }

    bool operator!=(const Rational& other) const {
        return !(*this==other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Rational& rational) {
        os << rational._numerator << "/" << rational._denominator;
        return os;
    }
private:
    int _numerator;
    int _denominator;
};
#endif
