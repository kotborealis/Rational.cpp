#pragma once

/**
 * Дробь, x/y
 */
class Rational {
public:
    int numerator;
    int denumerator;

    Rational();
    Rational(int, int);
    Rational(int);

    // Сокращение
    Rational reduce();

    // *-1
    Rational neg();
    // ^-1
    Rational inv();

    Rational sum(Rational);
    Rational sub(Rational);
    Rational mul(Rational);
    Rational div(Rational);

    // ==
    bool eq(Rational);
    // !=
    bool neq(Rational);
    // less than
    // <
    bool l(Rational);
    // less or equal than
    // <=
    bool leq(Rational);
    // greater than
    // >
    bool g(Rational);
    // greater or equal than
    // >=
    bool geq(Rational);

    // Вывести на экран
    void print();
    // Считать с клавиатуры
    void scan();
};
