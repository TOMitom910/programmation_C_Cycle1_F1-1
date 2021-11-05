#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Pointeurs_génériques

void raz(void *ptr, int n);

void echange(void *val1, void * val2, size_t size);
void echange2(void *val1, void * val2,size_t size);


int main()
{

 double dbl_reel=10.9;

 int tab_entier[10]={10};

 //raz(&dbl_reel,sizeof(dbl_reel));


 int n_a=9;
 int n_b=50;

 echange(&n_a,&n_b,sizeof(int));

 float flt_fa=0.2f;
 float flt_fb=2.8f;


 //echange(&flt_fa,&flt_fb,sizeof(float));
 echange2(&flt_fa,&flt_fb,sizeof(float));





 return 0;
}


void raz(void *ptr, int n){

 int n_i=0;

 char *adr=ptr;

 for(n_i=0;n_i<n;n_i++){
    *adr=0;
    *adr++; //adr++
 }

}


void echange(void *val1, void * val2,size_t size){


    void *temp=malloc(size);

    if(temp==null)
        return;

    char *dest=temp;
    char *s=val1;


    int i=0;
    for(i=0;i<size;i++)
        *dest++ = *s++;

    s=val2;

    dest=val1;
    for(i=0;i<size;i++)
        *dest++ = *s++;

    s=temp;
    dest=val2;
    for(i=0;i<size;i++)
        *dest++ = *s++;

    free(temp);


}

void echange2(void *val1, void * val2,size_t size){

    void *temp=malloc(size);
    if(temp==NULL)
            return;
    memcpy(temp,val1,size);
    memcpy(val1,val2,size);
    memcpy(val2,temp,size);

    free(temp);

}

