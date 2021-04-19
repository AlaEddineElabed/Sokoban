#include <level.h>
#include <Personnage.h>
#include <Objet.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Level lvl(6,10);
    //lvl.createcarte();
    lvl.loadcarte();
    lvl.affichagecarte();
    vector<vector<char>> testmap;
    //testmap is the matrix you can use as an example while working,
    // it the the representation of level Example1.txt in a vector<vector<char>>
    testmap=lvl.getcarte();
    Personnage p(lvl);
    p.debug();

    p.upp(testmap);
    cout << endl;
    lvl.setcarte(testmap);
    lvl.affichagecarte();

    p.debug();


    return 0;
}
