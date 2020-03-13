//
//  main.cpp
//  Dice
//
//  Created by Yuli Daroshka on 3/13/20.
//  Copyright © 2020 Y. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int dice;
    
    //seed the random number generator
    srand(time(0));
    dice = (rand() % 6) + 1;
    cout << "You rolled a " << dice << endl;
}

