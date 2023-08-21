//
// Created by Tomas on 13.08.2023.
//

#include <iostream>
#include <vector>
#include "string"

using namespace std;

int main() {

    //a
    string word1;
    string word2;
    string word3;

    cin >> word1;
    cin >> word2;
    cin >> word3;

    //b
    string sentence = word1 + " " + word2 + " " + word3;
    cout << sentence << endl;

    //c
    cout << word1 << ": " << word1.length() << endl;
    cout << word2 << ": " << word2.length() << endl;
    cout << word3 << ": " << word3.length() << endl;
    cout << sentence << ": " << sentence.length() << endl;

    //d
    string sentence2(sentence);

    //e
    for (int i = 9; i < 12; ++i) {
        if (sentence.length() < 12) {
            cout << "sentence er mindre en 12" << endl;
            break;
        }
        sentence2[i] = 'x';
    }
    cout << sentence << endl;
    cout << sentence2 << endl;

    //f
    string sentence_start;
    if (sentence.length() < 5) {
        cout << "sentence er mindre en 5" << endl;
    }
    else {
        sentence_start = sentence.substr(0, 5);
    }

    cout << sentence << endl;
    cout << sentence_start << endl;

    //g
    bool containsHello = sentence.find("hallo") != string::npos;
    cout << "sentence inneholder hallo: " << (containsHello ? "true" : "false") << endl;

    //h
    string sub = "er";

    vector<size_t> positions;
    size_t pos = sentence.find(sub, 0);

    while (pos != string::npos) {
        positions.push_back(pos);
        pos = sentence.find(sub, pos+1);
    }

    cout << "substrengen er ble i setningen: " << sentence << " funnet: " << endl;
    for (size_t position : positions) {
        cout << position << " ";
    }
    cout << endl;
}
