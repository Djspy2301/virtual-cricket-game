#include<iostream>
#include<string>
#include<cstdlib>
#include<windows.h>
#include<ctime>
#include<iomanip>
using namespace std;

char n;
void greet();
void start();
char initialize();
void selection();
void ining(string, string);
void decideWnner(int, int);
void displayScore(int, int);


class Team {

    private:
        string teamName, threePlayers, totalScore;
    
    public:

        void getName(string name) {

            teamName = name;
            cout<< name;
        }

        void getPlayer(string p1, string p2, string p3) {

            threePlayers = p1;
            threePlayers = p2;
            threePlayers = p3;

            cout<<"Player 1 is : "<<p1<< endl << "Player 2 is : "<< p2 <<endl <<"Player 3 is : " <<p3<<endl;
        }

        void getScore(string totalScore) {

            this->totalScore = totalScore;
        }
};

int main()
{

    greet();

    initialize();

    if (n == 'e') {

        return 0;
    }
    
    start();
    selection();

    void ining(string a, string b);
}

char initialize() {

    
    cout<< "Enter 's' to start, 'e' to exit : ";
    cin>>n;

    if(n == 's') {
        
        cout<< "\tLoading";
        Sleep(500);
        cout<<".";

        Sleep(500);
        cout<<".";
        Sleep(500);
        cout<<".\n"<<endl;
        Sleep(1000);

        Team t1, t2;

        cout<< "\tThe two teams are";
        Sleep(500);
        cout<<".";

        Sleep(500);
        cout<<".";
        Sleep(500);

        cout<<".\n"<<endl;
        Sleep(500);

        t1.getName("ALPHA");
        cout<<"\n";
        Sleep(500);
        t2.getName("BETA");
        cout<<"\n";

        Sleep(600);
        cout<<"\n\tPlayer of team 1 are";

        Sleep(500);
        cout<<".";

        Sleep(500);
        cout<<".";

        Sleep(500);
        cout<<".\n"<<endl;

        Sleep(1000);
        t1.getPlayer("Alpha1", "Alpha2", "Alpha3");

        Sleep(500);
        cout<<"\n\tPlayers of Team 2 are";

        Sleep(500);
        cout<<".";

        Sleep(500);
        cout<<".";

        Sleep(500);
        cout<<".\n"<<endl;

        Sleep(1000);
        t2.getPlayer("Beta1", "Beta2", "Beta3");

    } else if(n == 'e'){

        cout<< "Thank you";
        return 0;
    } else {

        cout<<"Press Valid key..."<<endl;
    }

}

void greet() {

    cout<<"======================================================"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"**************WELCOME TO GULLY CRICKET****************"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"======================================================"<<endl;
}

void start() {

    cout<< "\n\t# Game will be of 2 inning\n"<<endl;

    Sleep(700);
    cout<<"\t*Bating of Team 1\n\t*Bowling of Team 2\n\n";

    cout<<"\t# Selecting player for Bating";
    Sleep(400);

    cout<<".";
    Sleep(400);

    cout<<".";
    Sleep(400);

    cout<<".\n"<<endl;
    Sleep(1000);

}

void selection() {

    
    string team1[] = {"Alpha1", "Alpha2", "Alpha3"};
    string team2[] = {"Beta1", "Beta2", "Beta3"};
    
    srand(time(0));
    int a = rand() % 3;

    srand(49);
    int b = rand() % 3;
    cout<<"Bating of "<<team1[a]<<endl;
    Sleep(400);
    cout<<"Bowling of "<<team2[b]<<endl<<endl;

    ining(team1[a], team2[b]);
}

void ining(string a, string b) {

    char n;
    int st1 = 0, st2 = 0;
    cout<<"\t***1st inning begins***"<<endl;

    cout<< a <<" is bating"<<endl;

    for (int i = 1; i<= 6; i++) {

        cout<<"Bowler is throwing the ball, press 's' to swing bat : "<<endl;
        cin>>n;
        if (n == 's') {

            srand(time(0));
            int s = (rand() % 7);
            if(s == 0) {

                cout<< a <<" got bold "<<endl;
            }else{

                cout<< a <<" scored "<< s <<endl;
            }
            
            st1 += s;
        }
    }

    Sleep(2000);
    cout<<"\t***END OF 1ST INNING***\n\n\t***2nd inning begins***\n"<<endl;
    Sleep(500);

    cout<< b <<" is bating"<<endl;
    Sleep(1000);

    for (int i = 1; i <= 6; i++) {

        cout<<"Bowler is throwing the ball, press 's' to swing bat : "<<endl;
        cin>>n;

        if (n == 's') {

            srand(time(0));
            int s = 1 + (rand() % 6);
            cout<< b <<" scored " << s <<endl;
            st2 += s;
        }
    }

    displayScore(st1, st2);

    decideWnner(st1, st2);
}

void displayScore(int a, int b) {

    Sleep(1000);
    cout<<"\nTeam 1 Alpha total score is : "<<a<<endl;

    Sleep(1000);
    cout<<"Team 2 Beta total score is : "<<b<<endl;
}

void decideWnner(int a, int b) {

    int won = abs(a-b);
    
cout<<"\n"<<endl;
    Sleep(1500);
    if (a > b) {

        cout<<"Team Alpha has won the match with team Beta by "<< won << " runs"<<endl;
    } else {

        cout<<"Team Beta has won the match with team Alpha by "<< won << " runs"<<endl;
    }
}