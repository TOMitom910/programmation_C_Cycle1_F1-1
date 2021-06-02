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


typedef struct tPixel{

    char str_coul[TAILLE];
    tPoint pt;

}tPixel;

//Les enumerations

typedef enum Rgb{rouge=1,vert,bleu}Rgb;



typedef struct tPixel2{

    Rgb couleur;
    tPoint pt;

}tPixel2;

typedef enum booleen{faux,vrai}boolen;



//Mutateurs et ascesseur

int getX(tPoint pt);
int getY(tPoint pt);

void setX(tPoint *pt, int new_nx);
void setY(tPoint *pt, int new_ny);

void setPoint(tPoint *pt,int new_nx,int new_ny);


int main()
{
    tPixel pix={"rouge",{10,0}};

    strcpy(pix.str_coul,"orange");
    pix.pt.n_x=20;
    pix.pt.n_y=15;

    tPixel *p_pixel=NULL;
    p_pixel=&pix;

    strcpy(p_pixel->str_coul,"vert");
    p_pixel->pt.n_x=0;
    p_pixel->pt.n_y=0;



    tPixel2 pix2={vert,{0,0}};
    /* tPixel2 pix2;
     pix2.couleur=bleu;
     pix2.pt.n_x=0;
     pix2.pt.n_y=0;*/

     boolen test_couleur=faux;

    if(pix2.couleur==bleu){

        test_couleur=vrai;

    }else{

        test_couleur=faux;
    }

    printf("X : %d\n",getX(pix.pt));
    printf("Y : %d\n",getY(pix.pt));

    setX(&pix.pt,5);
    setY(&pix.pt,5);

    printf("X : %d\n",getX(pix.pt));
    printf("Y : %d\n",getY(pix.pt));

    setPoint(&pix.pt,10,8);



 return 0;
}



int getX(tPoint pt){

    return pt.n_x;
}

int getY(tPoint pt){

    return pt.n_y;
}


void setX(tPoint *pt, int new_nx){

    pt->n_x=new_nx;

}
void setY(tPoint *pt, int new_ny){

    pt->n_y=new_ny;
}

void setPoint(tPoint *pt,int new_nx,int new_ny){

    pt->n_x=new_nx;
    pt->n_y=new_ny;

}


