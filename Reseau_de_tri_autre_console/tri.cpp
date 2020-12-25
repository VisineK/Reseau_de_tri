#include <../shared/qstd.h>
using namespace qstd;

#include <stdio.h>
#include "tri.h"

Tri::Tri()
{

}

void Tri::Tri_Bulle()
{
    system("clear");

    int Tab_Tri[MAX];
    int d, i, ech, choix_Menu;


    printf("************** Tri à Bulle *************\n\n");

    /* Choix dimension du tableau */
    printf("Donnez la dimension du tableau a trier : ");
    scanf("%d", &d);
    printf("\n");


    /* Remplissage du tableau */
    for(i=0; i<d; i++){
        printf("Donnez l'element %d : ", i+1);
        scanf("%d", &Tab_Tri[i]);
    }

    /* Affichage du tableau avant le tri */
    printf("\n\nVoici le tableau avant tri : ");
    for (i=0; i<d; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n");

    /* Tri à bulle */
    do{
        ech = 0;
        for(i=0; i<d-1; i++){
            if(Tab_Tri[i] > Tab_Tri[i+1]){
                int tmp = 0;
                tmp = Tab_Tri[i];
                Tab_Tri[i] = Tab_Tri[i+1];
                Tab_Tri[i+1] = tmp;

                printf("\nL'element %d est echange avec %d\n", Tab_Tri[i], Tab_Tri[i+1]);
                for (i=0; i<d; i++){
                    printf("%d  ", Tab_Tri[i]);
                }
                ech++;
            }
        }
    }while(ech > 0);


    /* Affichage du tableau après le tri */
    printf("\n\nVoici le tableau apres tri : ");
    for (i=0; i<d; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n\n");


    printf("Pour reessayer ? --> 1\nVotre choix : ");
    scanf("%d", &choix_Menu);

    if(choix_Menu == 1){
        system("clear");
    }
}



void Tri::Tri_Selection()
{
    system("clear");

    int Tab_Tri[MAX];
    int d, i, max, position_max, choix_Menu, m;

    printf("************** Tri par Selection *************\n\n");

    /* Choix dimension du tableau */
    printf("Donnez la dimension du tableau a trier : ");
    scanf("%d", &d);
    printf("\n");

    m = d;

    /* Remplissage du tableau */
    for(i=0; i<d; i++){
        printf("Donnez l'element %d : ", i+1);
        scanf("%d", &Tab_Tri[i]);
    }

    /* Affichage du tableau avant le tri */
    printf("\n\nVoici le tableau avant tri : ");
    for (i=0; i<d; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n");

    /* Tri par Selection */
    while(d > 0){
        max = Tab_Tri[0];
        position_max = 0;

        for(i=0; i < d; i++){
            if(Tab_Tri[i] > max){
                max = Tab_Tri[i];
                position_max = i;
            }
        }
        for(i=position_max; i < d; i++){
            Tab_Tri[i] = Tab_Tri[i+1];
        }
        Tab_Tri[d-1] = max;
        printf("\nL'element %d est echange avec %d\n", Tab_Tri[i], Tab_Tri[i+1]);
        for (i=0; i<m; i++){
            printf("%d  ", Tab_Tri[i]);
        }
        d--;
    }

    /* Affichage du tableau après le tri */
    printf("\n\nVoici le tableau apres tri : ");
    for (i=0; i<m; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n\n");

    printf("Pour reessayer ? --> 1\nVotre choix : ");
    scanf("%d", &choix_Menu);

    if(choix_Menu == 1){
        system("clear");
    }
}



void Tri::Tri_Insertion()
{
    system("clear");

    int Tab_Tri[MAX];
    int d, i;


    printf("************** Tri par Insertion *************\n\n");

    /* Choix dimension du tableau */
    printf("Donnez la dimension du tableau a trier : ");
    scanf("%d", &d);
    printf("\n");


    /* Remplissage du tableau */
    for(i=0; i<d; i++){
        printf("Donnez l'element %d : ", i+1);
        scanf("%d", &Tab_Tri[i]);
    }

    /* Affichage du tableau avant le tri */
    printf("\n\nVoici le tableau avant tri : ");
    for (i=0; i<d; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n");


    /* Affichage du tableau après le tri */
    printf("\nVoici le tableau apres tri : ");
    for (i=0; i<d; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n\n");
}



void Tri::Tri_Permutation()
{
    system("clear");

    int Tab_Tri[MAX];
    int d, i;


    printf("************** Tri par Permutation *************\n\n");

    /* Choix dimension du tableau */
    printf("Donnez la dimension du tableau a trier : ");
    scanf("%d", &d);
    printf("\n");


    /* Remplissage du tableau */
    for(i=0; i<d; i++){
        printf("Donnez l'element %d : ", i+1);
        scanf("%d", &Tab_Tri[i]);
    }

    /* Affichage du tableau avant le tri */
    printf("\n\nVoici le tableau avant tri : ");
    for (i=0; i<d; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n");


    /* Affichage du tableau après le tri */
    printf("\nVoici le tableau apres tri : ");
    for (i=0; i<d; i++)
        printf("%d ", Tab_Tri[i]);
    printf("\n\n\n");
}
