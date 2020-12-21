//
//  Player.cpp
//  ECE109ExtraCred
//
//  Created by Aaron on 12/20/20.
//

#include "Player.hpp"
#include <ctime>
#include <algorithm>
#include <iostream>


class Player {
public:
    
    Player (int num = 0){
        playerNumber = num;
        
    }
    
    int vote(){
        std::srand(std::time(nullptr));
        int rand = std::rand() %5;
        if (rand ==0){
            rand += 1;
        }
    
        return rand;
    }
    
    
    
        
    
    
    
    

    int playerNumber;
    
};
