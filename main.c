#include <stdio.h>
#include <stdlib.h>

//Constantes
#define TAILLE 10
#define NBI 10


int main()
{

    //Tableau à 1 dim
    int nTab_Int[TAILLE];

    int n_i=0;

    //Init tab_int
    for(n_i=0;n_i<TAILLE;n_i++){

        nTab_Int[n_i]=0;

    }

    //Affiche tab_int
    for(n_i=0;n_i<TAILLE;n_i++){

        printf("%d\n",nTab_Int[n_i]);

    }


    int nTab_Int2[TAILLE]={0,1,0,1,0,0,0,0,0,0};
    int nTab_Int3[TAILLE]={255};
    int nTab_Int4[]={1,2,3,4,5};

    //Matrice, tableau deux dim

    int nTab_matrice[TAILLE][TAILLE];
    int n_j=0;
    for(n_i=0;n_i<TAILLE;n_i++){//ligne
            for(n_j=0;n_j<TAILLE;n_j++){//colonne

                nTab_matrice[n_i][n_j]=0;
            }

    }

    int nTab_matrice2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    for(n_i=0;n_i<3;n_i++){//ligne
            for(n_j=0;n_j<4;n_j++){//colonne

                printf("%d\n",nTab_matrice2[n_i][n_j]);
            }

    }








    getchar();




    return 0;
}
