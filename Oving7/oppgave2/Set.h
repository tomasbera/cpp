//
// Created by Tomas on 22.08.2023.
//

#ifndef OVINGER_SET_H
#define OVINGER_SET_H

#include "iostream"
#include <vector>
using namespace std;

class Set {

private:
    vector<int> numbers;

public:
    const vector<int> &getNumbers() const;

    Set();
    Set(vector<int> numbers);
    Set operator*(const Set &other);
    Set operator+(int number);
    Set &operator=(const Set &other);
};

ostream &operator<<(ostream &out, const Set &set);


#endif //OVINGER_SET_H
