#include "fraction.h"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
    cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);
    Fraction d = a / b;

    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    b += a;
    ++c;
    d *= d;

    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    c = a + b - d * a;
    c = -c;

    print("c = ", c);

    if (a + b != c + d)
        cout << "a + b != c + d" << endl;
    else
        cout << " a + b == c + d" << endl;
    while (b > a)
        b -= a;
    print("b = ", b);

    //a
    //5 - fraction1
    Fraction fraction1 = Fraction(1, 2);
    fraction1 = 2 - fraction1;
    print("fraction1 = ", fraction1);

    //fraction1 – 5
    Fraction fraction2 = Fraction(2, 1);
    fraction2 = fraction2 - 1;
    print("fraction2 = ", fraction2);

    //b
    //((((5 - 3) - fraction1) - 7) - fraction2)
    //1. her vil standart operasjonen brukt for to ints
    //2. så vil ikke.medlensfunksjonen operasjonen
    //3. så er det medlemsfunksjonen som blir brukt
    //4. til slutt så er det medlemsfunksjonen bare at med fraction istedenfor med en int
    Fraction fraction3;
    fraction3 = 5 - 3 - fraction1 - 7 - fraction2;
    print("fraction3 = ", fraction3);
}
