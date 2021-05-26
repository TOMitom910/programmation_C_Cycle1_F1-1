#include <stdio.h>
#include <stdlib.h>
#include <string.h>



//Constantes
#define TAILLE 10
#define NBI 10

//prototypes
//void init_tabEntier(int n_tabEntier[], int n_taille);
//ou
void init_tabEntier(int *pn_tabEntier, int n_taille);

char *get_pchar(char c_tabCar[],int n_taille);



//Pointeur et référence

int main()
{

    //Les pointeurs et réference sur entier
    int n_Entier=10;

    int *pn_Entier=NULL;

    pn_Entier=&n_Entier;

    int n_Entier2 =100;

    pn_Entier =&n_Entier2;

    pn_Entier=NULL;
    //Ne jamais utiliser un pointeur dont la réf est NULL

    pn_Entier=&n_Entier2;

    printf("la val pointer par pn_Entier : %d\n",*pn_Entier);

    *pn_Entier=5;

    printf("la val pointer par pn_Entier : %d\n",n_Entier2);


    //Pointeurs et les tableaux

    char c_tab[TAILLE]={'a','e','i','o','u','y'};

    char *pc_char=NULL;

    pc_char=c_tab;

    int n_i=0;

    for(n_i=0;n_i<strlen(pc_char);n_i++){

        printf("%c",pc_char[n_i]);

    }

    //incrémentation de pointeur de caractere, j'incremente l'espace d'adressage en octet
    pc_char++;


    //Meme manipulation mais avec des entiers

    int n_tabEntier[TAILLE]={0};

    int *pn_Entier3 =NULL;

    pn_Entier3=n_tabEntier;


    for(n_i=0;n_i<TAILLE;n_i++){

        pn_Entier3[n_i]=n_i;

    }

    //exemple d'incrémentation d'un pointeur
    for(n_i=0;n_i<TAILLE;n_i++){

        printf("\n%d",*pn_Entier3);

        //formalisme pointeur
        //pn_Entier3++;

        *(pn_Entier3)++;

    }

    pn_Entier3=n_tabEntier;

    for(n_i=0;n_i<TAILLE;n_i++){

        //pn_Entier3[n_i]++;
        //formalisme pointeur pour incrémenter la val
        (*pn_Entier3)++;

        printf("\n\n%d",pn_Entier3[n_i]);

        *(pn_Entier3)++;

    }


    for(n_i=0;n_i<TAILLE;n_i++){

        //formalisme du pointeur pour l'affectation
        //n_tabEntier[n_i]=8;
        *(n_tabEntier+n_i)=8;

    }



    int n_tabEntier2Dim[TAILLE][TAILLE];
    int n_j=0;

    for(n_i=0;n_i<TAILLE;n_i++){
            for(n_j=0;n_j<TAILLE;n_j++){

                //formalisme du pointeur pour l'affectation tableaux 2 dim
                //n_tabEntier[n_i][n_j]=8;
                *(*(n_tabEntier2Dim+n_i)+n_j)=8;

            }


    }

    init_tabEntier(n_tabEntier,TAILLE);



    char *pc_char2=get_pchar(c_tab,strlen(c_tab));
    char c_char=(get_pchar(c_tab,strlen(c_tab)))[0];



 return 0;
}


//void init_tabEntier(int n_tabEntier[], int n_taille)
//ou
void init_tabEntier(int *pn_tabEntier, int n_taille){

  int n_i=0;

  for(n_i=0;n_i<n_taille;n_i++){

    pn_tabEntier[n_i]=0;

  }


}


//fonction qui retourne un pointeur de caractere

char *get_pchar(char c_tabCar[],int n_taille){

  int n_i=0;

  for(n_i=0;n_i<n_taille;n_i++){

    c_tabCar[n_i]='z';

  }

  return c_tabCar;


}




