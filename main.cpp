//
//  main.cpp
//  ECE109ExtraCred
//
//  Created by Aaron on 12/20/20.
//

#include <iostream>

#include "Round.cpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    Player crewmate1(1);
    Player crewmate2(2);
    Player crewmate3(3);
    Player impostor(4);
    
    Round round1;
    round1.players.push_back(crewmate1);
    round1.players.push_back(crewmate2);
    round1.players.push_back(crewmate3);
    round1.players.push_back(impostor);
    
    
    round1.run();
    int playerVO = round1.votedOut();
     std::cout << playerVO << '\n';
    
    
    return 0;
}
