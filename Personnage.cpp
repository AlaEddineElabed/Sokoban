#include "Personnage.h"
#include <bits/stdc++.h>
using namespace std;


//Constructeur aves héritage(a vérifeir si objet need 2 arguments w personnage 4 wale)
Personnage::Personnage(int x , int y) : Objet() {
    dest_row = y ;
    dest_col = x ;

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
  	dest_col = col;
	dest_row = row;
	setDestination(c);
	Objet ob(dest_col , dest_row);//error khater mazelt aamlet constructeur fil objet.cppge
    
//vérifi ken il destination ili khtarha feha mur wala feha box w mbaaid lbox fama mur wala box akher
	if(ob.Is_Mur() )
		
			return true;
		
	return false;
}

void Personnage::move(){
    

	char c ;
	cout<<'Your move'<<endl;
	cin>> c ;
	switch(c) 
		{
		case 'z':
			row--;
			break;
		
		case 's':
			row++;
			break;

		case 'q':
			col--;
			break;

		case 'd':
			col++;
			break;	
		}
    
}