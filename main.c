#include <stdio.h>
#include <stdlib.h>

/**
    i : int             :nVar
    f : float           :flVar
    d : double          :dblVar
    c : char            :cVar
    l : long int        :lnVar
    ll: long long int   :llnVar
    L : double long     :ldblVar
    h : short int       :srVar
    ui: unsigned int    :unVar
    uf: unsigned float  :unfVar
    s : *STRING*
*/

#define TAILLEMIN 3 //Taille minimale de la croix et du carre

int main()
{
    //Initialisation des variables
    int nTaille,ni,nj;
    char cChar,cChar2;

    //Saisie des variables
    printf("Veuillez entrer un premier charactere\n");
    scanf("%c",&cChar);
    fflush(stdin);
    printf("Veuillez entrer un second charactere\n");
    scanf("%c",&cChar2);
    fflush(stdin);
    do{     //saise de l'entier avec verification de sa valeur
        printf("Veuillez entrer la taille de la croix\n");
        scanf("%i",&nTaille);
        if(nTaille<TAILLEMIN){
            printf("Erreur, veullez entrer un valeur superieur a %i\n",TAILLEMIN);
        }
    }while(nTaille<TAILLEMIN);


    //Boucles principales : croix
    for(ni=1;ni<=nTaille;ni++){
        for(nj=1;nj<=nTaille;nj++){
            if((nj==ni)||(nj==nTaille-(ni-1))){
                printf("%c",cChar);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    //Boucles principales : carre
    for(ni=1;ni<=nTaille;ni++){
        for(nj=1;nj<=nTaille;nj++){
            if (((ni==1)||(ni==nTaille))||(nj==1)||(nj==nTaille))
            {
                printf("%c", cChar);
            }
            else
            {
                printf("%c", cChar2);
            }
        }
        printf("\n");
    }

    getchar();
    return 0;
}
