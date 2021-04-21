#include "Personnage.h"
#include "Objet.h"
#include <bits/stdc++.h>
using namespace std;
Personnage::Personnage() : Objet(){
}
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


//void Personnage::up(Level &lvl){
//    if (y>0)  {
//
//            if (lvl.getcarte()[y-1][x] == '.' ){ //
//
//                lvl.getcarte()[y-1][x] = 'J';
//                lvl.getcarte()[y-1][x] = '.';
//                y--;
//    }
//    }
//    if (y>1) {
//            cout<<" hello there" ;
//    if ( (lvl.getcarte()[y-1][x] == 'b') && (lvl.getcarte()[y-2][x] == '.') ) {
//        lvl.getcarte()[y-1][x] = 'J';
//        lvl.getcarte()[y-2][x] = 'b';
//        lvl.getcarte()[y][x] = '.';
//        y--;
//    }}


//}


void Personnage::up(vector<vector<char>> &mapeu){

            if (mapeu[x-1][y] == '.' ){ //
                //cout << mapeu[x][y] << endl;
                 //mapeu[0][0] = 'K';
                mapeu[x-1][y] = 'J';
                mapeu[x][y] = '.';
                x--;
    }

    else if ( (mapeu[x-1][y] == 'b') && (mapeu[x-2][y] == '.') ) {
        mapeu[x-1][y] = 'J';
        mapeu[x-2][y] = 'b';
        mapeu[x][y] = '.';
        x--;
    }

}

void Personnage::down(vector<vector<char>> &mapeu){


            if (mapeu[x+1][y] == '.' ){

                mapeu[x][y] = '.';
                mapeu[x+1][y] = 'J';
                x++;

    }

            cout<<" hello there" ;
    if ( (mapeu[x+1][y] == 'b') && (mapeu[x+2][y] == '.') ) {
        mapeu[x+1][y] = 'J';
        mapeu[x+2][y] = 'b';
        mapeu[x][y] = '.';
        x++;
    }
}

void Personnage::right(vector<vector<char>> &mapeu){


            if (mapeu[x][y+1] == '.' ){
                mapeu[x][y] = '.';
                mapeu[x][y+1] = 'J';
                y++;
    }

            cout<<" hello there" ;
    if ( (mapeu[x][y+1] == 'b') && (mapeu[x][y+2] == '.') ) {
        mapeu[x][y+1] = 'J';
        mapeu[x][y+2] = 'b';
        mapeu[x][y] = '.';
        y++;
    }
}


void Personnage::left(vector<vector<char>> &mapeu){


            if (mapeu[x][y-1] == '.' ){
                mapeu[x][y] = '.';
                mapeu[x][y-1] = 'J';
                y--;
    }

            cout<<" hello there" ;
    if ( (mapeu[x][y-1] == 'b') && (mapeu[x][y-2] == '.') ) {
        mapeu[x][y-1] = 'J';
        mapeu[x][y-2] = 'b';
        mapeu[x][y] = '.';
        y--;
    }
}



char Personnage::move(vector<vector<char>>& mapeu){


	char c ;
	cout<<"Your move"<<endl;
	cin >> c ;
	switch(c)
		{
		case 'z':
			up(mapeu);
			break;

		case 's':
			down(mapeu);
			break;

		case 'q':
			left(mapeu);
			break;

		case 'd':
			right(mapeu);
			break;
		}

        return('h');
}
