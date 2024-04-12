

/* 
 * File:   newmain.c
 * Author: dbernard
 *
 * Created on 6 novembre 2019, 10:38
 * Modified on 6 novembre 2019, 10:38
 * Description : 
 */

#include <stdio.h>
#include <stdlib.h>
#define NBJOURS 5

int main(int argc, char** argv)
{
    float temperaturesMin[NBJOURS]={-10, 5, -2, 0, -3};
    float temperaturesMax[NBJOURS]={3, 10, 4, 12, 8};
    int indexMini;
    int jourMini;
    float tempMini;
    
    // recherche de la plus petite des temperatures min
    tempMini=temperaturesMin[0];
    jourMini=0;
    for (indexMini=0;indexMini<NBJOURS;indexMini++)
    {
        // la temperature courante est plus petite que la mini
        if (tempMini>temperaturesMin[indexMini])
        {
            // la mini prend la valeur de la temperature courante
            tempMini=temperaturesMin[indexMini]; 
            // jour de la temperature mini est l'index dans le tableau
            jourMini=indexMini;
        }
    }
    // affichage de la plus petite des temperatures mini ainsi que le jour correspondant
    printf("La temperature la plus faible est  %.2f au %d ieme jour \n",tempMini,jourMini+1);

    return (EXIT_SUCCESS);
}

