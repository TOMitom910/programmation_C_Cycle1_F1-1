#include <stdio.h>
#include <stdlib.h>



//Constantes
#define TAILLE 10
#define NBI 10


static int cpt();

//classe de stockage en c


//extern - auto - static -volatile



int main()
{

 int n_i=0; //auto

 volatile int n_v=0;

 int n_cpt=0;


 n_cpt=cpt();
 printf("Compteur cpt() : %d\n",n_cpt);

 n_cpt=cpt();
 printf("Compteur cpt() : %d\n",n_cpt);





 return 0;
}


static int cpt(){

    static int n_cpt; //possede toujours la même ref mérmoire

    n_cpt++;

    return n_cpt;



}





