#include "Personnage.h"
#include "Objet.h"
#include <bits/stdc++.h>
using namespace std;

Personnage::Personnage(Level lvl) : Objet() {

    for (int i = 0; i < lvl.getcarte().size(); i++) {
        for (int j = 0; j <  lvl.getcarte()[1].size(); j++){
            if (lvl.getcarte()[i][j] == 'J') {
                x = i;
                y = j;
            }
        }
    }
}
//Constructeur aves héritage(a vérifeir si objet need 2 arguments w personnage 4 wale)
Personnage::Personnage(int x1 , int y1) : Objet() {
    x=x1;
    y=y1;
}
//Destination ili bch yimchilha
void Personnage::setDestination(int c)
{
	switch(c)
		{
		case 'z':
			dest_row--;
			break;

		case 's':
			dest_row++;
			break;

		case 'q':
			dest_col--;
			break;

		case 'd':
			dest_col++;
			break;
		}
}


bool Personnage::verif(int c)
{

	setDestination(c);
	//Objet ob(dest_col , dest_row);//error khater mazelt aamlet constructeur fil objet.cppge

//vérifi ken il destination ili khtarha feha mur wala feha box w mbaaid lbox fama mur wala box akher
	//if(ob.Is_Mur() )

                //return true;

	//return false;
}

void Personnage::debug(){
cout << "(" << x << "," << y << ")" << endl;
}


void Personnage::up(Level &lvl){
    if (y>0)  {

            if (lvl.getcarte()[y-1][x] == '.' ){ //

                lvl.getcarte()[y-1][x] = 'J';
                lvl.getcarte()[y-1][x] = '.';
                y--;
    }
    }
    if (y>1) {
            cout<<" hello there" ;
    if ( (lvl.getcarte()[y-1][x] == 'b') && (lvl.getcarte()[y-2][x] == '.') ) {
        lvl.getcarte()[y-1][x] = 'J';
        lvl.getcarte()[y-2][x] = 'b';
        lvl.getcarte()[y][x] = '.';
        y--;
    }}


}


void Personnage::upp(vector<vector<char>> &mapeu){
    if (y>0)  {

            if (mapeu[y-1][x] == '.' ){ //

                mapeu[y-1][x] = 'J';
                mapeu[y-1][x] = '.';
                y--;
    }
    }
    if (y>1) {
            cout<<" hello there" ;
    if ( (mapeu[y-1][x] == 'b') && (mapeu[y-2][x] == '.') ) {
        mapeu[y-1][x] = 'J';
        mapeu[y-2][x] = 'b';
        mapeu[y][x] = '.';
        y--;
    }}
}



void Personnage::move(){


	char c ;
	cout<<'Your move'<<endl;
	cin>> c ;
	switch(c)
		{
		case 'z':
			y--;
			break;

		case 's':
			y++;
			break;

		case 'q':
			x--;
			break;

		case 'd':
			x++;
			break;
		}

}
