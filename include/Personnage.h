 #include "Objet.h"
 #include <bits/stdc++.h>
 #include <level.h>
 using namespace std;

 // Perso Hérite d'objet
class Personnage : public Objet
{
   protected :

        int dest_row ;
        int dest_col ;
   public:
       Personnage(Level);
   //Const
       Personnage(int , int);
   //Position initial de player dépend mil level
       void initialiser_position(int,int);
   //Debug
       void debug();
    //Mouvma
       void up(Level&);
       void upp(vector<vector<char>>&);
       void down(Level);
       void left(Level);
       void right(Level);
       void move();
   //Vérifie ken inajm yitharek wale
       bool verif(int);
   //Destiantion a choisir
       void setDestination(int c) ;

};
