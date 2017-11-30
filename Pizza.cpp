//
//  Pizza.cpp
//  pizza
//
//  Created by Kristófer Gudmundsson on 30.11.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Pizza.hpp"
#include <stddef.h>
using namespace std;

Pizza::Pizza() {
    topping_count = 0;
    toppings = NULL;
    current_topping_number = 0;
}

Pizza::Pizza(int number_of_toppings) {
    topping_count = number_of_toppings;
    toppings = new Topping[topping_count];
    current_topping_number = 0;
}

Pizza::~Pizza(){
    
    if (toppings != NULL) {
        delete[] toppings;
    }
}

void Pizza::add_topping(Topping topping){
    
    if (current_topping_number < topping_count) {
        toppings[current_topping_number] = topping;
        current_topping_number++;
    }
}

ostream& operator << (ostream& out, const Pizza& pizza) {
    out << "Pizza:" << endl;
    
    for (int i = 0; i < pizza.topping_count; i++) {
        out << pizza.toppings[i] << endl;
    }
    
    return out;
}

istream& operator >> (istream& in, Pizza& pizza) {
    
    return in;
}
