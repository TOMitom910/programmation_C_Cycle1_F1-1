#include <stdio.h>
#include <stdlib.h>

//Constantes
#define TAILLE 10
#define NBI 10



int main()
{



    int n_entier=10;
    float flt_reel=0.0;
    char c_car='a';

    /*printf("Le caractere est : %c \n",c_car);
    printf("Le reel est : %lf\n",flt_reel);
    printf("L'entier est : %d\n",n_entier);*/

    printf("L'entier est : %d, le caractere est : %c, le reel est :%lf\n",n_entier,c_car,flt_reel);


    /*printf("Saisir un entier : \n");
    scanf("%d",&n_entier);

    printf("Saisir un reel : \n");
    scanf("%f",&flt_reel);

    //vider le buffer des entrees
    fflush(stdin);

    printf("Saisir un caractere : \n");
    scanf("%c",&c_car);

    printf("La val de %d en hexa : %x",n_entier,n_entier);*/


    //Condition if

    int n_a=0, n_b=0;

    if(n_a==n_b){
        printf("Identiques");
    }

    //operateurs de tests
    //==
    //!=
    //<
    //>
    //<=
    //>=
    int n_c=9;
    //If + cas alternatif
    if(n_a==n_c){
         printf("Identiques");
    }else{
        printf("Pas Identiques");
    }

    //test exp booleen
    if(n_c){
        //si n_c diff 0
        printf("test booleen");
    }

    //test successif
    if(n_c>9){
        printf("supp a 9");
    }else if(n_c<9){
        printf("inf a 9");
    }else{
        printf("egale");
    }

    /*if(test){

        //intructions...
    }

    if(test){

         //intructions...
    }*/


    //condition switch
    n_c=0;
    switch(n_c){
            case 2:printf("...");break;
            case 6:printf("...");break;
            case 9:printf("Valeur 9");break;
            default:printf("\ncas par defaut");break;

    }

    //& et logique => &&
    //| ou logique => ||
    //^ ou exclusif
    if((n_a==0) || (n_b==0)){
        printf("true");
    }else{
        printf("false");
    }



    int n_i=0;
    //Boucle pour
    for(n_i=0;n_i<10;n_i++){ //n_i++ == n_i=n_i+1
        printf("%d\n ",n_i);

    }

    //for(;;)

    //while() faire

    n_i=0;
    while(n_i!=10){
        printf("%d\n ",n_i);

        n_i++;
    }


    //do while()
    n_i=0;
    do{

       printf("%d\n ",n_i);

       n_i++;

    }while(n_i!=8);

    //while(1){



    //}

    //compl�ments
    for(n_i=0;n_i<NBI;n_i++){

        printf("debut du tour %d\n",n_i);
        if(n_i==3)break;
        printf("fin tour %d\n",n_i);

    }

    for(n_i=0;n_i<NBI;n_i++){

        printf("debut du tour %d\n",n_i);
        if(n_i<4)continue;
        printf("fin tour %d\n",n_i);

    }


    for(n_i=0;n_i<NBI;n_i++){

        printf("debut du tour %d\n",n_i);
        if(n_i==4)goto sortie;
        printf("fin tour %d\n",n_i);

    }

    sortie:printf("Apr�s la boucle\n");








    getchar();




    return 0;
}
