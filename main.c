#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Pointeurs de fcts




void somme (int n_a, int n_b, int *ptrRes);


typedef struct tHero{

    int n_id;
    char *str_nom;
    int n_ptVie;

}tHero;


void initHero(tHero *ptr_myHero);

int main()
{

    tHero myHero;

    initHero(&myHero);

    FILE * pFile=NULL;

    pFile = fopen ("myfile.txt","a");

    if(pFile==NULL){
        perror("Erreur ouverture/ecriture fichier\n");
        system("pause");
        exit(1);
    }

    /*fprintf (pFile, "Id : %d\n",myHero.n_id);
    fprintf (pFile, "Name : %s\n",myHero.str_nom);
    fprintf (pFile, "Vie : %d\n",myHero.n_ptVie);*/

    char strTemp[255];

    strcpy(strTemp,myHero.str_nom);


    fprintf (pFile, "%d\n",myHero.n_id);
    fputs(strTemp,pFile);
    fputc('\n',pFile);
    fprintf (pFile, "%d\n",myHero.n_ptVie);
    fputc('\n',pFile);







    fclose(pFile);

    int n_Id=0;

    int n_ptVie=0;

    char strNom[255];

    pFile = fopen ("myfile.txt","r");

    if(pFile==NULL){
        perror("Erreur ouverture/ecriture fichier\n");
        system("pause");
        exit(1);
    }

    rewind (pFile);
    /*fscanf (pFile, "Id : %d\n", &n_Id);
    fscanf (pFile, "Name : %s\n", strNom);
    fscanf (pFile, "Vie : %d\n", &n_ptVie);*/

    int n_cpt=0;

    while(!feof(pFile)){

      fgets(strNom,255,pFile);
      n_cpt++;
      fputs(strNom,stdout);


    }





    fclose(pFile);






 free(myHero.str_nom);
  /*  int n_a =10;
    int n_b=30;

    int n_Res=0;
    int *n_ptra=&n_a;

    *n_ptra=20;//n_a=20;

    somme (n_a, n_b,n_ptra);

    //Malloc

    int *ptr_val=(int*)malloc(sizeof(int));

    *ptr_val=255;


    int *ptr_tabInt=(int*)malloc(10*sizeof(int));

    int n_i=0;

    if (ptr_tabInt!=NULL){


        for(n_i=0;n_i<10; n_i++){

        //Formalisme Tableaux
        //ptr_tabInt[n_i]=0;

        //Formalisme pointeurs
        *(ptr_tabInt+n_i)=0;

        }
    }




    if(ptr_val!=NULL)
        free(ptr_val);

    if(ptr_tabInt!=NULL)
        free(ptr_tabInt);


*/





 return 0;
}


void somme (int n_a, int n_b, int *ptrRes){

    *ptrRes=n_a+n_b;

}


void initHero(tHero *ptr_myHero){

    ptr_myHero->n_id=1;

    ptr_myHero->str_nom=(char*)malloc(255*sizeof(char));

    if(ptr_myHero->str_nom!=NULL){

        strcpy(ptr_myHero->str_nom,"Lehmann");
    }

    ptr_myHero->n_ptVie=100;


}


