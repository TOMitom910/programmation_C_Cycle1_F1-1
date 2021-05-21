#include <stdio.h>
#include <stdlib.h>
#include "define.h"

//Constantes
#define TAILLE 10
#define NBI 10


//Prototype programme 2

void init_tabEntier(int tab_Entier[TAILLE]);

void affiche_tabEntier(int tab_Entier[TAILLE]);


int main()
{

    int n_Res=0;

    int n_a=0, n_b=0;

    char quit ='a';


    /*printf("Programme somme entiers\n");


    do{
         saisie_Entier(&n_a,&n_b);

         proc_sommeEntier_adr(n_a,n_b,&n_Res);


         affiche_SommeEntier(n_Res);

         quitter(&quit);

    }while(quit!='q');*/




    //Programme 2

    int tab_entier[TAILLE];

    init_tabEntier(tab_entier);

    affiche_tabEntier(tab_entier);


    getchar();




    return 0;
}



//Implementation des fcts ou procedures

//Fonction somme de deux entiers

/*int sommeEntier(){

    int n_a, n_b, n_c;
    printf("Saisir un entier : \n");
    scanf("%d",&n_a);
    printf("Saisir un entier : \n");
    scanf("%d",&n_b);

    n_c=n_a+n_b;

    return n_c;

}*/



int fct_sommeEntier(int n_Entier1, int n_Entier2){

   // int n_c=0;

    //n_c=n_Entier1+n_Entier2;

    return n_Entier1+n_Entier2;

}



//passage par valeur
void proc_sommeEntier(int n_Entier1, int n_Entier2){


    //int n_c=0;

    //n_c=n_Entier1+n_Entier2;

    printf("Le resultat de la somme est : %d \n ",n_Entier1+n_Entier2);

}


//Passage adresse
void proc_sommeEntier_adr(int n_Entier1, int n_Entier2, int *pn_Res){

    *pn_Res=n_Entier1+n_Entier2;

}


//procedure de saisie de deux entiers
void saisie_Entier(int *pn_a , int *pn_b){

    fflush(stdin);
    printf("Saisir un entier : \n");
    scanf("%d",pn_a);
    printf("Saisir un entier : \n");
    scanf("%d",pn_b);
}



void affiche_SommeEntier(int n_Entier){

 printf("Le resultat de la somme est : %d \n ",n_Entier);

}


void quitter(char *pc_quit){

    fflush(stdin);
    printf("Voulez vous quitter q pour quitter\n");
    scanf("%1c",pc_quit);

}


//programme 2


void init_tabEntier(int tab_Entier[TAILLE]){

  int n_i=0;

  for(n_i=0;n_i<TAILLE;n_i++){

        tab_Entier[n_i]=0;
  }

}


void affiche_tabEntier(int tab_Entier[TAILLE]){

  int n_i=0;

  for(n_i=0;n_i<TAILLE;n_i++){

       printf("%d\n", tab_Entier[n_i]);
  }

}


