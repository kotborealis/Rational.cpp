#include "Rational.h"
#include <iostream>

Rational::Rational() {
    numerator = 1;
    denumerator = 1;
}

Rational::Rational(int x, int y) {
    numerator = x;
    denumerator = y;

    // Если y равен 0
    // значит выполнили где-то
    // деление на 0
    // выставим nan в true
    nan = (y == 0);
}

Rational::Rational(int x) {
    numerator = x;
    denumerator = 1;
}

void Rational::print() {
    if(nan)
        std::cout << "<NAN>\n";
    else
        std::cout 
            << numerator
            << "/"
            << denumerator
            << std::endl;
}

Rational Rational::neg() {
    return Rational(
            -1 * numerator,
            denumerator
    );
}

Rational Rational::inv() {
    return Rational(
        denumerator,
        numerator
    );
}

bool Rational::eq(Rational r) {
    return 
        numerator == r.numerator
        &&
        denumerator == r.denumerator;
}

bool Rational::neq(Rational r) {
    return !eq(r);
}

Rational Rational::mul(Rational r){
    return Rational(
        numerator * r.numerator,
        denumerator * r.denumerator
    );
}

// inv
// sum/sub/mul/div

int main() {
    Rational x; // 1/1
    Rational y(10, 5); // 10/5
    Rational z(7);

    std::cout << "x.eq(y): ";
    std::cout << x.eq(y) << std::endl;
    std::cout << "x.neq(y): ";
    std::cout << x.neq(y) << std::endl;
    std::cout << "z.neg(): ";
    z.neg().print();

    Rational n(10, 0);
    n.mul(Rational(1)).print();
    Rational(1).mul(n).print();
}
