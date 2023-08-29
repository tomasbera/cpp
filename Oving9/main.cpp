//
// Created by Tomas on 29.08.2023.
//

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


ostream &operator<<(ostream &out, const vector<int> &table) {
    for (auto &e : table)
        out << e << " ";
    return out;
}

bool biggerThen(int n) {
    return n > 15;
}

bool almostEqual(int  n, int m) {
    cout <<"n: "<< n << "  m: " << m << endl;
    return abs(n - m) <= 2;
}

bool replaceOdd(int n){
    return (n % 2) == 1;
}

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    vector<int> v2 = {2, 3, 12, 14, 24};

    //a
    cout << "oppgave 1" << endl;
    auto a1 = find_if(v1.begin(), v1.end(), biggerThen);
    cout << "First number > 15 in v1 is at pos: " << *a1 << endl;
    cout << endl;

    //b
    cout << "oppgave 2" << endl;
    auto b1 = equal(v1.begin(), v1.begin() + 5, v2.begin(), almostEqual);
    cout << "[v1, v1+5] - v2 interval: " << (b1 ? "True" : "False") << endl;

    auto b2 = equal(v1.begin(), v1.begin() + 4, v2.begin(), almostEqual);
    cout << "[v1, v1+4] - v2 interval: " << (b2 ? "True" : "False") << endl;
    cout << endl;

    //c
    cout << "oppgave 3" << endl;
    replace_copy_if(v1.begin(), v1.end(), v1.begin(), replaceOdd, 100);
    cout << "Oddtall erstattet: " << v1 << endl;

    return 0;
}