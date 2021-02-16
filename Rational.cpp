#include "Rational.h"
#include <iostream>

Rational::Rational(int x, int y) {
    numerator = x;
    denumerator = y;
}

Rational::Rational() {
    numerator = 1;
    denumerator = 1;
}

Rational::Rational(int x) {
    numerator = x;
    denumerator = 1;
}


Rational Rational::neg() {
    // 10/5
    // -10/5
    return Rational(numerator * -1, denumerator);
}

Rational Rational::inv() {
    return Rational(denumerator, numerator);
}

Rational Rational::sum(Rational r) {
    int newNumerator = (
         (numerator * r.denumerator)
            + 
         (r.numerator * denumerator)
    );

    int newDenumerator = 
        denumerator * r.denumerator;

    return Rational(
        newNumerator,
        newDenumerator
    );
}

Rational Rational::sub(Rational r) {
    return sum(r.neg());
}

Rational Rational::mul(Rational r) {
    return Rational(
        numerator * r.numerator,
        denumerator * r.denumerator
    );
}

Rational Rational::div(Rational r) {
    return mul(r.inv());
}

bool Rational::eq(Rational r) {
    return
        numerator == r.numerator
            &&
        denumerator == r.denumerator;
}

void Rational::print() {
    if(denumerator == 1) {
        std::cout << numerator << "\n";
    }
    else {
        std::cout 
            << "(" 
            << numerator 
            << "/" 
            << denumerator
            << ")\n";
    }
}

