#ifndef PERSONNAGE_H
#define PERSONNAGE_H
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
        Personnage();
       Personnage(Level);
   //Const
       Personnage(int , int);
   //Position initial de player dépend mil level
       void initialiser_position(int,int);
   //Debug
       void debug();
    //Mouvma

       void up(vector<vector<char>>&);
       void down(vector<vector<char>>&);
       void left(vector<vector<char>>&);
       void right(vector<vector<char>>&);
       char move(vector<vector<char>>&);
   //Vérifie ken inajm yitharek wale
       bool verif(int);
   //Destiantion a choisir
       void setDestination(int c) ;

};
#endif
