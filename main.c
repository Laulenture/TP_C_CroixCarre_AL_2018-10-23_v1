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

int main()
{
    int nTaille,ni,nj;
    char cChar;

    printf("Veuillez entrer un charactere\n");
    scanf("%c",&cChar);
    fflush(stdin);
    printf("Veuillez entrer la taille de la croix\n");
    scanf("%i",&nTaille);

    if(nTaille<1){
        printf("Erreur, veullez entrer un valeur superieur a 1\n");
    }
    else{
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
    }

    return 0;
}
