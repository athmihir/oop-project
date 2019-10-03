#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// The Random die function starts here
int dice_roll(){
   int v;
   srand(time(NULL)); //ensures true randomness
   v = rand() % 6 + 1;
   return v; //returns value between 1 and 6
}
// The random function ends here

//Player class gives info of position and id of player
class Player{
    int id;
    int position;
    public: Player(int id){
            position = 0;
            this->id = id;
            }
    friend class Game;
};
//player class ends

//Game class to store players
class Game{
    int players;
    //No of players
    Player* p1;
    Player* p2;
    Player* p3;
    Player* p4;
    Player* p5;
    //players
public: Game(){
        players = 0;
        //when game object is created the players are 0.
        p1 = NULL;
        p2 = NULL;
        p3 = NULL;
        p4 = NULL;
        p5 = NULL;
        //set player pointers to null as no players when object created.
        }
        void EnterPlayers();
    friend class Player;
};
//game class ends

//Enter players
void Game::EnterPlayers(){
    int p;
    cout<<"How many players would like to play?"<<endl;
    cin>>p;
    for(int i=0;i<p;i++){
        players += 1;
        if(players == 1)
            p1 = new Player(1);
        if(players == 2)
            p1 = new Player(2);
        if(players == 3)
            p1 = new Player(3);
        if(players == 4)
            p1 = new Player(4);
        if(players == 5)
            p1 = new Player(5);
    }
    //This code will add players to the game class as required. Unused players will point to NULL.
}


int main(){
    Game g;
    g.EnterPlayers();
    cout<<dice_roll();
    return 0;
}
