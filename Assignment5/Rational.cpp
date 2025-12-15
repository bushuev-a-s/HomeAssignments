/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 5
 */

#include "Rational.h"
#include "Gcd.h"

Rational::Rational(int numerator, int denominator):
    _numerator(numerator/gcd(numerator,denominator)), _denominator(denominator/gcd(numerator,denominator)) {}

Rational::Rational(int num): _numerator(num), _denominator(1) {}

Rational::Rational() {}

int Rational::getNumerator() const {
    return _numerator;
}

int Rational::getDenominator() const {
    return _denominator;
}

Rational Rational::operator+(const Rational& other) const {
    return Rational(_numerator*other.getDenominator()+other.getNumerator()*_denominator,
    _denominator*other.getDenominator());
}

void Rational::operator+=(const Rational& other) {
    _numerator=_numerator*other.getDenominator()+other.getNumerator()*_denominator;
    _denominator=_denominator*other.getDenominator();
    int g=gcd(_numerator, _denominator);
    _numerator=_numerator/g;
    _denominator=_denominator/g;
}

Rational Rational::operator-(const Rational& other) const {
    return Rational(_numerator*other.getDenominator()-other.getNumerator()*_denominator,
    _denominator*other.getDenominator());
}

Rational Rational::operator-() const {
    return Rational(-_numerator,_denominator);
}

Rational Rational::operator*(const Rational& other) const {
    return Rational(_numerator*other.getNumerator(),_denominator*other.getDenominator());
}

Rational Rational::operator*(int other) const {
    return Rational(_numerator*other,_denominator);
}

void Rational::operator=(int other) {
    _numerator=other;
    _denominator=1;
}

bool Rational::operator==(const Rational& other) const {
    return (_numerator==other.getNumerator() && _denominator==other.getDenominator());
}

bool Rational::operator!=(const Rational& other) const {
    return !(*this==other);
}
