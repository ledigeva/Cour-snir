

/* 
 * File:   main.c
 * Author: dbernard
 *
 * Created on 12 novembre 2019, 13:06
 * Modified on 12 novembre 2019, 13:06
 * Description : Trier un tableau par recherche des minimas successifs
 */

#include <stdio.h>
#include <stdlib.h>

#define TAILLE 5

int main(int argc, char** argv)
{
    int tabATrier[TAILLE]={5,7,2,1,4};
    int i;
    int j;
    int tempo;
    int valMin;
    int iMin;
    //Trier tabATrier
    for (i=0;i<TAILLE;i++)
    {
        //init indice Min et val Min
        valMin=tabATrier[i];
        iMin=i;        
        //recherche du mini dans reste du tableau
        for(j=i;j<TAILLE;j++)
        {
            // valeur min est plus grande que val du tableau
            if (valMin>tabATrier[j])
            {
                // valeur min prend valeur du tableau
                valMin=tabATrier[j];
                // sauvegarde de l'indice min
                iMin=j;                
            }
        }                
        //inversion Mini et val courante
        tempo=tabATrier[i];
        tabATrier[i]=valMin;
        tabATrier[iMin]=tempo;
    }
    
    
    

    return (EXIT_SUCCESS);
}

