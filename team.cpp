// #include "team.h"       // "player.h", <string>, <vector>
#include "player.cpp"
#include <vector>
using namespace std;

class Team {

    public:

        Team();
        std :: string name;
        int totalRunsScored;
        int wicketsLost;
        int totalBallsBowled;
        std :: vector<Player> players;

};

Team :: Team() {

    totalBallsBowled = 0;
    wicketsLost = 0;
    totalRunsScored = 0;
}