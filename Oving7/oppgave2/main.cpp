//
// Created by Tomas on 22.08.2023.
//

#include <iostream>
#include <string>
#include <vector>
#include "Set.h"

using namespace std;

int main(){
    cout << "Union: " << endl;
    Set set1 = Set({1, 2, 3, 4});
    Set set2 = Set({3, 7, 1, 8});
    cout <<"set1: " << set1 << endl;
    Set set3 = set1 * set2;
    cout <<"set3: " << set3 << endl;
    cout << endl;
    cout << "Adding numbers: " << endl;
    set3 = set3 + 9;
    set3 = set3 + 9;
    cout <<"set3: " << set3 << endl;
    cout << endl;
    cout << "over writing a set" << endl;
    set1 = set3;
    cout <<"set1: " << set1 << endl;

    return 0;
}
