// Header guard
#pragma once

/**
 * Рациональное число (дробь)
 * numerator/denumerator
 */
class Rational {
public:
    int numerator;
    int denumerator;

    /**
     * x/y
     */
    Rational(int x, int y);

    // Конструктор по умолчанию
    // 1/1
    Rational();

    /**
     * x/1
     */
    Rational(int x);

    /**
     * negate (*-1)
     */
    Rational neg();

    /**
     * inverse (^-1)
     */
    Rational inv();

    Rational sum(Rational r);

    Rational sub(Rational r);

    Rational mul(Rational r);

    Rational div(Rational r);

    bool eq(Rational r);

    void print();
};
