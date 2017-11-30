//
//  Pizza.hpp
//  pizza
//
//  Created by Kristófer Gudmundsson on 30.11.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#ifndef Pizza_hpp
#define Pizza_hpp

#include <stdio.h>
#include <iostream>
#include "Topping.hpp"
#endif /* Pizza_hpp */

using namespace std;

class Pizza {
private:
    Topping *toppings;
    int topping_count;
    int current_topping_number;
public:
    Pizza();
    Pizza(int number_of_toppings);
    ~Pizza();
    void add_topping(Topping topping);
    
    friend istream& operator >> (istream& in, Pizza& pizza);
    
    friend ostream& operator << (ostream& out, const Pizza& pizza);
};
