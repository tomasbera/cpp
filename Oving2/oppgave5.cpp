#include <iostream>
using namespace std;

int main() {
    double number = 1.1;
    double *ptr = &number;
    double &ref = number;

    cout << number << endl;
    cout << *ptr << endl;
    cout << ref << endl;

    number = 2.2;
    cout << endl;

    cout << number << endl;
    cout << *ptr << endl;
    cout << ref << endl;

}