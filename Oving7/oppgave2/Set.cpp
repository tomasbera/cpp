//
// Created by Tomas on 22.08.2023.
//

#include <iostream>
#include <string>
#include <vector>
#include "Set.h"

using namespace std;

Set::Set(vector<int> numbers) {
    this->numbers = numbers;
}

Set Set::operator+(int number) {
    Set set = *this;
    bool add = true;
    for (int member : set.numbers) {
        if(member == number)
            add = false;
    }
    if(add)
        set.numbers.emplace_back(number);
    return set;
}

Set Set::operator*(const Set &other) {
    Set result = *this;
    for (int equalizer : other.numbers) {
        bool found = true;
        for (int finder : result.numbers) {
            if (equalizer == finder) {
                found = false;
                break;
            }
        }
        if (found) {
            result.numbers.emplace_back(equalizer);
        }
    }
    return result;
}

Set &Set::operator=(const Set &other) {
    numbers = other.numbers;
    return *this;
}

ostream &operator<<(ostream &out, const Set &set) {
    string str = "";
    for (int numb : set.getNumbers()) {
        str += (to_string(numb) + " ");
    }
    out << str;
    return out;
}

const vector<int>& Set::getNumbers() const {
    return numbers;
}
