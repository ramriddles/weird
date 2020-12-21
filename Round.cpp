//
//  Round.cpp
//  ECE109ExtraCred
//
//  Created by Aaron on 12/20/20.
//

#include "Round.hpp"
#include "Player.cpp"
#include <vector>
#include <map>
#include <algorithm>

class Round {
public:
    void run(){
        
        for (auto thePlayer : players){
           int playerNumber = thePlayer.vote();
           std::cout << playerNumber;
            votes[playerNumber]++;
        }
        
    }
    
    bool tie () {

      /*  for (auto thePlayer : players){
            int numVotes = thePlayer.Vote();
            votes.insert(std::make_pair(playerNumber, numVotes)); //making a map of the amount of votes each player has against them
        }
       */
        int numOftwos = 0;
        int numOfones = 0;
        
        for (auto theVote : votes){
            if(theVote.second == 2){
                numOftwos++;
            }
            if(theVote.second ==1){
                numOfones++;
            }
            if(players.size() == 4 && numOftwos == 2){
                return true;
            }
            
            if(players.size() ==3 && numOfones == 3){
                return true;
            }
            
        }
        
        return false;
    }
    
    int votedOut(){
        
        
        for (auto thePlayer: players){
            if (players.size() == 4){
                if( votes[thePlayer.playerNumber] >= 2){
                    return thePlayer.playerNumber;
                 }
            }
            
            if (players.size() == 3){
                if( votes[thePlayer.playerNumber] >= 2){
                    return thePlayer.playerNumber;
                 }
            }
        }
       /* if (Round::players.size() == 4){
            if( votes[playerNumber] >= 3){
                return true;
            }
        }
            if (players.size() ==3){
                if (votes[playerNumber] >=2){
                    return true;
                }
            }
            
            return false;
       */
        return 0;
        }
    
    
    

    std::vector<Player> players;
    std::map<int,int> votes;
    friend class Player;
};
