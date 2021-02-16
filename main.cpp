#include "Rational.h"
#include <assert.h>

int main() {
    assert((
        Rational(10, 5)
        .mul(Rational(2, 4))
        .eq(Rational(20, 20))
    ));
}
