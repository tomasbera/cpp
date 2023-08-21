#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <iomanip>
using namespace std;

void read_temperatures(double temperatures[], int length);

int main() {
    //1a

    int bellow = 0;
    int between = 0;
    int above = 0;

    int length = 5;
    double temperatures[length];

    cout << "You are going to many write some temperatures" << endl;

    for (int i = 0; i < length; ++i) {
        cout << "Temperature numb " << i << ": ";
        cin >> temperatures[i];
    }

    for (double temperature : temperatures) {
        if (temperature < 10) bellow++;
        if (temperature >= 10 && temperature <= 20) between++;
        if (temperature > 20) above++;
    }

    cout << "Number bellow " << bellow << endl;
    cout << "Number between 10 and 20 " << between << endl;
    cout << "Number above 20 " << above << endl;


    //1b
    cout << endl;
    cout << endl;

    bellow = 0;
    between = 0;
    above = 0;
    temperatures[length];

    cout << "Read from file: " << endl;
    read_temperatures(temperatures, length);

    for (double temperature : temperatures) {
        if (temperature < 10) bellow++;
        else if (temperature >= 10 && temperature <= 20) between++;
        else if (temperature > 20) above++;
    }

    cout << "Number bellow " << bellow << endl;
    cout << "Number between 10 and 20 " << between << endl;
    cout << "Number above 20 " << above << endl;

    return 0;
}

    void read_temperatures(double temperatures[], int length){
        const char filename[] = "C:/Users/Tomas/CLionProjects/oving1/temp.dat";
        ifstream  file;
        file.open(filename);
        if(!file) {
            cout << "Something went wrong when opening the file" << endl;
            exit(EXIT_FAILURE);
        }
        int temp;
        int i = 0;
        while(file >> temp && i < length){ //Reads until end
            temperatures[i] = temp;
            i++;
        }
    }
