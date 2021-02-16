#include "Rational.h"
#include <iostream>

Rational::Rational() {
    numerator = 1;
    denumerator = 1;
}

Rational::Rational(int x, int y) {
    numerator = x;
    denumerator = y;
}

Rational::Rational(int x) {
    numerator = x;
    denumerator = 1;
}

void Rational::print() {
    std::cout 
        << numerator
        << "/"
        << denumerator
        << std::endl;
}

int main() {
    Rational x; // 1/1
    Rational y(10, 5); // 10/5
    Rational z(7);

    x.print();
    y.print();
    z.print();
}
