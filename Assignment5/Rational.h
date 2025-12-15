/*
 * Alexander Bushuev
 * st140044@student.spbu.ru
 * Home assignment 5
 */

#ifndef RATIONAL_H
#define RATIONAL_H
class Rational {
public:
    Rational(int numerator, int denominator);
    Rational(int num);
    Rational();

    int getNumerator() const;
    int getDenominator() const;

    Rational operator+(const Rational& other) const;
    void operator+=(const Rational& other);
    Rational operator-(const Rational& other) const;
    Rational operator-() const;
    Rational operator*(const Rational& other) const;
    Rational operator*(int other) const;

    void operator=(int other);

    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;

private:
    int _numerator;
    int _denominator;
};
#endif
