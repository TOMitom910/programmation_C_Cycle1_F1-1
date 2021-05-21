#include <stdio.h>
#include <stdlib.h>

//Constantes
#define TAILLE 255
#define NBI 10


int main()
{

   //Tableaux de caracteres

     char cTab_char[TAILLE]="hello";

     char cTab_char2[TAILLE]={'t','o','t','o'};

    cTab_char2[4]='e';

    int n_cpt=0;

    while(cTab_char2[n_cpt]!='\0'){

     n_cpt++;

    }
    printf("%d",n_cpt);


    printf("Entrez une chaine de carctere\n");
    //scanf("%9s",cTab_char);

    //gets(cTab_char);
    fgets(cTab_char,TAILLE,stdin);

   // printf("%s",cTab_char);
   //puts(cTab_char);
    fputs(cTab_char,stdout);


    getchar();




    return 0;
}
