//
//  Topping.cpp
//  pizza
//
//  Created by Kristófer Gudmundsson on 30.11.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "Topping.hpp"
#include <string.h>

Topping::Topping(){
    
}

Topping::Topping(char *name, double price) {
    
    strcpy(this-> name, name);
    this->price = price;
}

ostream& operator << (ostream& out, const Topping& topping) {
    
    out << topping.name << " " << topping.price;
    
    return out;
}

istream& operator >> (istream& in, Topping& topping) {
    
    cout << "Name: ";
    cin >> topping.name;
    
    cout << "Price: ";
    cin >> topping.price; 
    
    return in;
}
