//
//  Controller.cpp
//  Vector
//
//  Created by Brailow, Parker on 1/29/18.
//  Copyright © 2018 Brailow Inc. All rights reserved.
//

#include "Controller.hpp"

Controller :: Controller()
{
    
}

void Controller :: start()
{
    vector<int> counting(5);
    for (int i = 1; i < 6; i++)
    {
        counting [i] = i;
        cout << "i can count, i sware luk rite hur" << counting [i] << "tuld u so" << endl;
    }
    vector<string> wording(3);
    wording[1] = "I";
    wording[2] = "can";
    wording[3] = "word";
    for (int i = 1; i < 4; i++)
    {
        cout << wording[i] << endl;
    }
}
