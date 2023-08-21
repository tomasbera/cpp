//
// Created by Tomas on 10.08.2023.
//

#include <iostream>
using namespace std;

int main() {

   /* original oppgave
    int a = 5;
    int &b; lager en referanse men ønsker en pointer
    int *c;
    c = &b; denne burde derfor også være brukes som en pointer og ikke en refereanse
    *a = *b + *c; a er ikke en pointer
    &b = 2; b burde være en pointer


    */

    int a = 5;
    int *b; // her har jeg ett dillema med at enten burde b være en nullptr eller deklarert til å se på at = &a
            // en anne måte e fikse det på hadde vært å ha b som en integer:  int b = a eller noe slikt
    int *c;

    c = b;

    a = *b + *c;

    *b = 2;

    cout << "a: " << a << endl;
    cout << "b: " << *b << endl;
    cout << "c: " << *c << endl;
}
