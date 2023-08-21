#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<double> list = {1.1,2.2,3.3,4.4,5.5};

    cout << "Front: " << list.front() << endl;
    cout << "Back: " << list.back() << endl;


    list.emplace(list.begin(), 0.1);

    cout << "new numb: "<<list.front() << endl;

    auto found_numb = find(list.begin(), list.end(), 3.3);

    if (found_numb != list.end()) {
        cout << "Found: " << *found_numb << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
