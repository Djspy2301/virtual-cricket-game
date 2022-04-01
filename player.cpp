// #include "player.h"         //<string>
#include <string>

class Player {

    public:
        
        Player();
        std :: string name;
        int index;
        int runsScored;
        int ballsPlayed;
        int ballsBowled;
        int runsGiven;
        int wicketsTaken;

};

Player :: Player() {

    runsScored = 0;
    ballsPlayed = 0;
    ballsBowled = 0;
    runsGiven = 0;
    wicketsTaken = 0;
    
}