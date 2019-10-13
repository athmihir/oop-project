#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;


int dice_roll(){
   int v;
   srand(time(NULL)); //ensures true randomness
   v = rand() % 6 + 1;
   return v; //returns value between 1 and 6
}


class Player{
    int position;
    public: Player(){
            position = 0;
            }
    friend class Game;
    void play(int);
};

void Player::play( int die){
    position += die;
    if(position == 21){
        cout<<"Snake!!!";
        position -= 10;
    }
    else if(position == 34){
        cout<<"Snake!!!";
        position -= 15;
    }
    else if(position == 67){
        cout<<"Snake!!!";
        position -= 12;
    }
    else if(position == 58){
        cout<<"Snake!!!";
        position -= 4;
    }
    else if(position == 87){
        cout<<"Snake!!!";
        position -= 56;
    }
    else if(position == 94){
        cout<<"Snake!!!";
        position -= 76;
    }
    else if(position == 45){
        cout<<"Ladder!!!";
        position += 15;
    }
    else if(position == 75){
        cout<<"Ladder!!!";
        position += 12;
    }
    else if(position == 88){
        cout<<"Ladder!!!";
        position += 4;
    }
    else if(position == 2){
        cout<<"Ladder!!!";
        position += 26;
    }
    else if(position == 18){
        cout<<"Ladder!!!";
        position += 76;
    }

}

class Game{
    int players;
    Player p1;
    Player p2;
    Player p3;
    Player p4;
public: Game(){
        players = 0;
        }
        void EnterPlayers();
        void PrintGameLine(int);
        void PrintGame();
        void play();
        friend class Player;
};


void Game::play(){
    while(p1.position < 100 and p2.position < 100 and p3.position < 100 and p4.position < 100){
        int t, die;
        cout<<"Which player is playing?"<<endl;
        cin>>t;
        switch(t){
            case 1:
                die = dice_roll();
                cout<<"die roll is "<<die<<endl;
                p1.play(die);
                break;
            case 2:
                die = dice_roll();
                cout<<"die roll is "<<die<<endl;
                p2.play(die);
                break;

            case 3:
                die = dice_roll();
                cout<<"die roll is "<<die<<endl;
                p3.play(die);
                break;
            case 4:
                die = dice_roll();
                cout<<"die roll is "<<die<<endl;
                p4.play(die);
                break;
        }
        PrintGame();
    }
}


void Game::PrintGameLine(int i){
    if(p1.position == i)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-1)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-1)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-2)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-2)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-3)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-3)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-4)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-4)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-5)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-5)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-6)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-6)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-7)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-7)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-8)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-8)
        cout<<"P2";
    else
        cout<<"  ";
    if(p1.position == i-9)
        cout<<"P1";
    else
        cout<<"  ";
    cout<<"  ";
    if(p2.position == i-9)
        cout<<"P2"<<endl;
    else
        cout<<"  "<<endl;


    cout<<"  "<<i<<" ";
    cout<<"  "<<i-1<<" ";
    cout<<"  "<<i-2<<" ";
    cout<<"  "<<i-3<<" ";
    cout<<"  "<<i-4<<" ";
    cout<<"  "<<i-5<<" ";
    cout<<"  "<<i-6<<" ";
    cout<<"  "<<i-7<<" ";
    cout<<"  "<<i-8<<" ";
    cout<<"  "<<i-9<<" "<<endl;

    if(p3.position == i)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-1)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-1)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-2)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-2)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-3)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-3)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-4)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-4)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-5)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-5)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-6)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-6)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-7)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-7)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-8)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-8)
        cout<<"P4";
    else
        cout<<"  ";
    if(p3.position == i-9)
        cout<<"P3";
    else
        cout<<"  ";
    cout<<"  ";
    if(p4.position == i-9)
        cout<<"P4"<<endl;
    else
        cout<<"  "<<endl;

}


void Game::PrintGame(){
    PrintGameLine(100);
    PrintGameLine(90);
    PrintGameLine(80);
    PrintGameLine(70);
    PrintGameLine(60);
    PrintGameLine(50);
    PrintGameLine(40);
    PrintGameLine(30);
    PrintGameLine(20);
    PrintGameLine(10);
}


int main(){
    Game g;
    g.PrintGame();
    g.play();
    return 0;
}
