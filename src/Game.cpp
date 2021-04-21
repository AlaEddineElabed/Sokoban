#include "Game.h"
#include <bits/stdc++.h>
using namespace std;
Game::Game(Level lvl1)
{

    lvl=lvl1;
    Personnage g(lvl);
    p = g;
}
void Game::testing() {
//    for (int i = 0; i < lvl.getcarte().size(); i++) {
//    cout << lvl.getcarte()[i][0] << " ";
//    cout << "hello";
//    }
    p.debug();
    //lvl.loadcarte();
    Personnage g(lvl);
    p=g;
    lvl.affichagecarte();
    vector<vector<char>> testmap;
    //testmap is the matrix you can use as an example while working,
    // it the the representation of level Example1.txt in a vector<vector<char>>
    testmap=lvl.getcarte();
    //Personnage p(lvl);
    p.debug();


    p.move(testmap);
    /*for (int i = 0; i < testmap.size(); i++) {
        for (int j = 0; j < testmap[0].size(); j++)
            cout << testmap[i][j] << " ";
        cout << endl;
    }*/
    cout << endl;
    lvl.setcarte(testmap);
    lvl.affichagecarte();

    p.debug();

}

void Game::mainloop(){
char s;
s='.';


while (1==1) {
    testing();

    }

}

Game::~Game()
{

}
