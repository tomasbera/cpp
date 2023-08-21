//
// Created by Tomas on 10.08.2023.
//

#include <iostream>
using namespace std;


int find_sum(const int *table, int length);

int find_sum(const int *table, int length) {
    int sum = 0;

    for (int i = 0; i < length; ++i) {
        sum += *table;
        table++;
    }

    return sum;
}

int main() {

    int length = 20;
    int table[length];
    int *ptr = table;

    for(int i = 0; i < length; i++){
        table[i] = i + 1;
    }

    cout << find_sum(ptr, 10) << endl;
    ptr = &table[10];
    cout << find_sum(ptr, 5) << endl;
    ptr = &table[15];
    cout << find_sum(ptr, 5) << endl;

}
