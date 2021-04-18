 #include "Objet.h"
 #include <bits/stdc++.h>
 using namespace std;
 
 // Perso Hérite d'objet
class Personnage : public Objet
{  
   protected :
        int dest_row ;
        int dest_col ;
   public:
     
   //Const
       Personnage(int , int);
   //Position initial de player dépend mil level
       void initialiser_position(int,int);
   //Wadh7a
       void move();
   //Vérifie ken inajm yitharek wale
       bool verif(int);
   //Destiantion a choisir
       void setDestination(int c) ;

};