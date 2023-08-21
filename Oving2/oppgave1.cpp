#include <iostream>
using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    //a

    cout << "adressen til variebalen i er: " << &i << endl;
    cout << "adressen til variebalen j er: " << &j << endl;
    cout << "adressen til variebalen p er: " << p << endl;
    cout << "adressen til variebalen q er: " << q << endl;


    cout << endl;

    cout << "verdien til variabelen i er: " << i << endl;
    cout << "verdien til variabelen j er: " << j << endl;
    cout << "verdien til variabelen p er: " << *p << endl;
    cout << "verdien til variabelen q er: " << *q << endl;


    //b
    *p = 7; //setter ny verdi til p
    *q += 4; //setter ny verdi til q
    *q = *p + 1; //setter ny verdi til q
    p = q; //setter adressen til p lik q og dermed også verdien

    cout << *p << " " << *q << endl; //skriver ut "8 8"
}
