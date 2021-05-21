#ifndef DEFINE_H_INCLUDED
#define DEFINE_H_INCLUDED


//Fonctions et procédure
//prototypes des fcts ou procedures
//La logique
//int sommeEntier();
extern int fct_sommeEntier(int n_Entier1, int n_Entier2);
//ou
//int fct_sommeEntier(int, int);

extern void proc_sommeEntier(int n_Entier1, int n_Entier2);

//passage par adresse
extern void proc_sommeEntier_adr(int n_Entier1, int n_Entier2, int *pn_Res);


//Saisie
extern void saisie_Entier(int *pn_a , int *pn_b);

//Vue
extern void affiche_SommeEntier(int n_Entier);

//procedure quitter
extern void quitter(char *pc_quit);


#endif // DEFINE_H_INCLUDED
