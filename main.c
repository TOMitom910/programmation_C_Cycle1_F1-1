#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Pointeurs de fcts


int sommeEntier (int n_e1, int n_e2);


//pointeur de fonction
int (*ptrFct)(int,int);




int main()
{

 int n_a=10, n_b=12;

 ptrFct=&sommeEntier;

 int n_res=(*ptrFct)(n_a,n_b);

 printf("le res est : %d \n",n_res);

 return 0;
}


int sommeEntier (int n_e1, int n_e2){

    return n_e1+n_e2;
}



