#include <level.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Level lvl(6,10);

    lvl.loadcarte();
    //lvl.affichagecarte();
    vector<vector<char>> testmap;
    //testmap is the matrix you can use as an example while working,
    // it the the representation of level Example1.txt in a vector<vector<char>>
    testmap=lvl.getcarte();
    return 0;
}
