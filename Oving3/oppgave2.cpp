//
// Created by Tomas on 13.08.2023.
//

#include <iostream>
#include "oppgave1.h"
using namespace std;

int main() {
    Circle circle(5);

    int area = circle.get_area();
    cout << "Arealet er lik " << area << endl;

    double circumference = circle.get_circumference();
    cout << "Omkretsen er lik " << circumference << endl;
}