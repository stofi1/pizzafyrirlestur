//
//  MainUI.cpp
//  pizza
//
//  Created by Kristófer Gudmundsson on 30.11.2017.
//  Copyright © 2017 Kristófer Alex Gudmundsson. All rights reserved.
//

#include "MainUI.hpp"
#include "PizzaUI.hpp"

MainUI::MainUI(){
    
}

void MainUI::startUI() {
    char selection = '\0';
    
    cout << "Please enter action";
    
    while (selection != 'q') {
        
        cout << "m: make pizza" << endl;
        cout << "w: write" << endl;
        cout << "r: read" << endl;
        cout << "q: quit" << endl;
        
        cin >> selection;
        
        if (selection == 'p') {
            PizzaUI pizzaui;
            pizzaui.startUI();
        }
        if (selection == 'w') {
            
        }
        if (selection == 'r') {
            
        }
    }
    
}
