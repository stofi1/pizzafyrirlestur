//
//  PizzaUI.cpp
//  pizza
//
//  Created by Kristófer Gudmundsson on 30.11.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "PizzaUI.hpp"
#include "Pizza.hpp"
#include <iostream>
using namespace std;

PizzaUI::PizzaUI(){
    
}

void PizzaUI::startUI() {
    
    int topping_count;
    
    cout << "How many toppings";
    cin >> topping_count;
    
    Pizza pizza(topping_count);
    
    for(int i = 0; i < topping_count; i++) {
        Topping topping;
        cin >> topping;
        pizza.add_topping(topping);
    }
}
    

