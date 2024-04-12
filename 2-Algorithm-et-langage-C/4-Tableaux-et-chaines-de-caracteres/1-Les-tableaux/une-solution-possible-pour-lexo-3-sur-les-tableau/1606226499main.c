#include <stdio.h>
#include <stdlib.h>
#define TAILLEMAX 10

int main(int argc, char** argv) {
    int tabVal[TAILLEMAX];
    int tabValNeg[TAILLEMAX];
    int tabValPos[TAILLEMAX];
    int nbVal;
    int cptNulles;
    int i, iPos, iNeg;
    int sommeNeg;
    int miniPos, maxiPos;
    // demande du nombre de valeurs a saisir [1..TAILLEMAX]
    do {
        printf("Combien de valeurs pour tabVal ?");
        scanf("%d", &nbVal);
    } while (nbVal <= 0 || nbVal > TAILLEMAX);



    // remplissage de tabVal
    for (i = 0; i < nbVal; i++) {
        printf("val%d : ", i + 1);
        scanf("%d", &tabVal[i]);
    }
    // remplissage tabValNeg et tabValPos
    iPos = 0;
    iNeg = 0;
    cptNulles = 0;
    for (i = 0; i < nbVal; i++) {
        if (tabVal[i] < 0) {
            tabValNeg[iNeg] = tabVal[i];
            iNeg++;
        }
        if (tabVal[i] > 0) {
            tabValPos[iPos] = tabVal[i];
            iPos++;
        }
        if (tabVal[i] == 0) {
            cptNulles++;
        }
    }
    //somme des valeurs negatives
    if (iNeg > 0) // il y a au moins une valeur negative
    {
        sommeNeg = 0;
        for (i = 0; i < iNeg; i++) {
            sommeNeg = sommeNeg + tabValNeg[i];
        }
        printf("la somme des valeurs negative est : %d\n", sommeNeg);
    } else {
        printf("Il n'y a pas de valeurs negatives dans le tableau\n");

    }
    //recherche des extremas du tableau des positifs
    if (iPos > 0) { // il y a au moins un positif
        miniPos = tabValPos[0];
        maxiPos = tabValPos[0];
        for (i = 0; i < iPos; i++) {
            if (miniPos > tabValPos[i]) {
                miniPos = tabValPos[i];
            }
            if (maxiPos < tabValPos[i]) {
                maxiPos = tabValPos[i];
            }
        }
        printf("Val mini des positifs : %d\n", miniPos);
        printf("Val maxi des positifs : %d\n", maxiPos);
    } else {
        printf("Il n'y a pas de valeurs positives dans le tableau\n");
    }
    return (EXIT_SUCCESS);
}

