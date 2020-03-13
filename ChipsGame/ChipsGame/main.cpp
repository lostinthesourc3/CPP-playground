//
//  main.cpp
//  ChipsGame
//
//  Created by Y on 3/13/20.
//  Copyright © 2020 Yuli Daroshka. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MAX_CHIPS = 100;
const float MAX_TURN = .5;

int main() {
    bool p1Turn = true;
    bool gameOver = false;
    int chipsInPile = 0;
    int chipsTaken = 0;
    int maxPerTurn = 0;

    string playerNames[2];
    cout << "Player 1, enter your name: " << endl;
    cin >> playerNames[0];
    cout << "Player 2, enter your name: " << endl;
    cin >> playerNames[1];
    
    // seed random number generator
    srand(time(0));
    
    chipsInPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round will start with " << chipsInPile << " in the pile." << endl;
    
    maxPerTurn = (MAX_TURN * chipsInPile);
    cout << "You can only take " << static_cast<int>(chipsInPile * MAX_TURN) << endl;
    
    chipsTaken = (rand() % maxPerTurn) + 1;
    cout << "Number taken: " << chipsTaken << endl;
    
    return 0;
}
