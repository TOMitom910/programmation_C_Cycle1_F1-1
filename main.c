#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 10


//Types

/*

Algo

Type tPoint = Enregistrement

    n_x : Entier
    n_y : Entier

FinEnregistrement


VAR

mon_Point : tPoint


DEBUT

mon_Point.x=0
mon_Point.y=0

FIN

*/


//En C
//un point dans un plan
typedef struct tPoint{

    int n_x;
    int n_y;

}tPoint;



int main()
{

 tPoint mon_Point={0,0};

 //la valeur
 //mon_Point.n_x=0;
 //mon_Point.n_y=0;

 tPoint *pMonPoint=NULL;

 pMonPoint=&mon_Point;

 //pointeur de structure
 pMonPoint->n_x=10;
 pMonPoint->n_y=10;


 //formalisme pointeur
 (*pMonPoint).n_x=20;
 (*pMonPoint).n_y=20;

 //Tableaux

 tPoint tab_point[TAILLE];

 int n_i=0;
 int n_j=0;

 for(n_i=0;n_i<TAILLE;n_i++){
    tab_point[n_i].n_x=0;
    tab_point[n_i].n_y=0;
 }


 tPoint Matirce_point[TAILLE][TAILLE];


 for(n_i=0;n_i<TAILLE;n_i++){
        for(n_j=0;n_j<TAILLE;n_j++){
             Matirce_point[n_i][n_j].n_x=0;
             Matirce_point[n_i][n_j].n_y=0;
        }

 }



 tPoint tab_point2[TAILLE]={{0,0},{10,5}};



 return 0;
}







