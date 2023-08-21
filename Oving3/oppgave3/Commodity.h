//
// Created by Tomas on 13.08.2023.
//

#ifndef OPPGAVE3_COMMODITY_H
#define OPPGAVE3_COMMODITY_H
#include "string"
using namespace std;
const double moms = 1.25;
class Commodity {
public:
    Commodity(string name, int id, double price);
    string get_name() const {return name;};
    int get_id() const {return id;};
    double get_price(double quantity) const {return price * quantity;};
    double get_price() const {return price;};
    void set_price(double price);
    double get_price_with_sales_tax() const{return price * moms;};
    double get_price_with_sales_tax(double quantity) const;
private:
    string name;
    int id;
    double price;
};


#endif //OPPGAVE3_COMMODITY_H

