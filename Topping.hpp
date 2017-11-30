//
//  Topping.hpp
//  pizza
//
//  Created by Kristófer Gudmundsson on 30.11.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Topping_hpp
#define Topping_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


#endif /* Topping_hpp */

class Topping {
private:
    char name[32];
    double price;
public:
    Topping();
    Topping(char *name, double price);
    
    friend istream& operator >> (istream& in, Topping& topping);
    friend ostream& operator << (ostream& out, const Topping& topping);
};
