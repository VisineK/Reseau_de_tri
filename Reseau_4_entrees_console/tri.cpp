#include <../shared/qstd.h>
using namespace qstd;

#include "tri.h"

Tri::Tri()
{
    /* Déclarations */
    int Tab1[50], n, i, tmp; /* Tableau, n dimension, indice boucle, variable tampon */
    int c1_1, c1_2, c2_1, c2_2, c3_1, c3_2, c4_1, c4_2, c5_1, c5_2;

    /* Saisie des données */
    printf("/!\\ On ne peut utiliser que 4 données donc N doit être égale a 4\n");
    printf("Dimension N du tableau initial : ");
    scanf("%d", &n );
    printf("\n");

    for (i=0; i<n; i++)
    {
        printf("Elément %d : ", i);
        scanf("%d", &Tab1[i]);
    }

    /* Affichage du tableau */
    printf("\nTableau donné : ");
    for (i=0; i<n; i++)
        printf("%d ", Tab1[i]);
    printf("\n\n");

    int T1 = Tab1[0];
    int T2 = Tab1[1];
    int T3 = Tab1[2];
    int T4 = Tab1[3];

    printf("Avant l'application du réseau de tri : \n\n");
    printf("%d\t----*---------*---------\t?\n", T1);
    printf("  \t    |         |           \n");
    printf("%d\t----|----*----*----*----\t?\n", T2);
    printf("  \t    |    |         |      \n");
    printf("%d\t----*----|----*----*----\t?\n", T3);
    printf("  \t         |    |           \n");
    printf("%d\t---------*----*---------\t?\n\n\n", T4);

    printf("*****************************************\n");
    printf("*****************************************\n\n");



    int Tab2[] = {T1, T2, T3, T4};

    printf("Réalisation du réseau de tri : \n\n");

    if(T1 > T3){
        tmp = Tab2[0];
        Tab2[0] = Tab2[2];
        Tab2[2] = tmp;

        c1_1 = Tab2[0];
        c1_2 = Tab2[2];
        printf("Connecteur 1 : On échange la valeur %d avec %d\n", c1_1, c1_2);

        printf("%d\t----%d--------*---------\t?\n", T1, c1_1);
        printf("  \t    |         |         \n");
        printf("%d\t----|----*----*----*----\t?\n", T2);
        printf("  \t    |    |         |    \n");
        printf("%d\t----%d---|----*----*----\t?\n", T3, c1_2);
        printf("  \t         |    |         \n");
        printf("%d\t---------*----*---------\t?\n\n\n", T4);
    }else{
        c1_1 = Tab2[0];
        c1_2 = Tab2[2];
        printf("Connecteur 1 : Il n'y a pas d'échange\n");

        printf("%d\t----%d--------*---------\t?\n", T1, c1_1);
        printf("  \t    |         |         \n");
        printf("%d\t----|----*----*----*----\t?\n", T2);
        printf("  \t    |    |         |    \n");
        printf("%d\t----%d---|----*----*----\t?\n", T3, c1_2);
        printf("  \t         |    |         \n");
        printf("%d\t---------*----*---------\t?\n\n\n", T4);
    }


    if(T2 > T4){
        tmp = Tab2[1];
        Tab2[1] = Tab2[3];
        Tab2[3] = tmp;

        c2_1 = Tab2[1];
        c2_2 = Tab2[3];
        printf("Connecteur 2 : On échange la valeur %d avec %d\n", c2_1, c2_2);

        printf("%d\t----%d--------*---------\t?\n",T1, c1_1);
        printf("  \t    |         |         \n");
        printf("%d\t----|----%d---*----*----\t?\n",T2, c2_1);
        printf("  \t    |    |         |    \n");
        printf("%d\t----%d---|----*----*----\t?\n",T3, c1_2);
        printf("  \t         |    |         \n");
        printf("%d\t---------%d---*---------\t?\n\n\n",T4, c2_2);
    }else{
        c2_1 = Tab2[1];
        c2_2 = Tab2[3];
        printf("Connecteur 2 : Il n'y a pas d'échange\n");

        printf("%d\t----%d--------*---------\t?\n",T1, c1_1);
        printf("  \t    |         |         \n");
        printf("%d\t----|----%d---*----*----\t?\n",T2, c2_1);
        printf("  \t    |    |         |    \n");
        printf("%d\t----%d---|----*----*----\t?\n",T3, c1_2);
        printf("  \t         |    |         \n");
        printf("%d\t---------%d---*---------\t?\n\n\n",T4, c2_2);
    }


    if(T1 > T2){
        tmp = Tab2[0];
        Tab2[0] = Tab2[1];
        Tab2[1] = tmp;

        c3_1 = Tab2[0];
        c3_2 = Tab2[1];
        printf("Connecteur 3.1 : On échange la valeur %d avec %d\n", c3_1, c3_2);

        printf("%d\t----%d---------%d--------\t?\n",T1, c1_1, c3_1);
        printf("  \t    |          |         \n");
        printf("%d\t----|----%d----%d---*----\t?\n",T2, c2_1, c3_2);
        printf("  \t    |    |          |    \n");
        printf("%d\t----%d---|-----*----*----\t?\n",T3, c1_2);
        printf("  \t         |     |         \n");
        printf("%d\t---------%d----*---------\t?\n\n\n",T4, c2_2);
    }else{
        c3_1 = Tab2[0];
        c3_2 = Tab2[1];
        printf("Connecteur 3.1 : Il n'y a pas d'échange\n");

        printf("%d\t----%d--------%d--------\t?\n",T1, c1_1, c3_1);
        printf("  \t    |         |         \n");
        printf("%d\t----|----%d---%d---*----\t?\n",T2, c2_1, c3_2);
        printf("  \t    |    |         |    \n");
        printf("%d\t----%d---|----*----*----\t?\n",T3, c1_2);
        printf("  \t         |    |         \n");
        printf("%d\t---------%d---*---------\t?\n\n\n",T4, c2_2);
    }


    if(T3 > T4){
        tmp = Tab2[2];
        Tab2[2] = Tab2[3];
        Tab2[3] = tmp;

        c4_1 = Tab2[2];
        c4_2 = Tab2[3];
        printf("Connecteur 3.2 : On échange la valeur %d avec %d\n", c4_1, c4_2);

        printf("%d\t----%d--------%d--------\t?\n",T1, c1_1, c3_1);
        printf("  \t    |         |         \n");
        printf("%d\t----|----%d---%d---*----\t?\n",T2, c2_1, c3_2);
        printf("  \t    |    |         |    \n");
        printf("%d\t----%d---|----%d---*----\t?\n",T3, c1_2, c4_1);
        printf("  \t         |    |         \n");
        printf("%d\t---------%d---%d--------\t?\n\n\n",T4, c2_2, c4_2);
    }else{
        c4_1 = Tab2[2];
        c4_2 = Tab2[3];
        printf("Connecteur 3.2 : Il n'y a pas d'échange\n");

        printf("%d\t----%d--------%d--------\t?\n",T1, c1_1, c3_1);
        printf("  \t    |         |         \n");
        printf("%d\t----|----%d---%d---*----\t?\n",T2, c2_1, c3_2);
        printf("  \t    |    |         |    \n");
        printf("%d\t----%d---|----%d---*----\t?\n",T3, c1_2, c4_1);
        printf("  \t         |    |         \n");
        printf("%d\t---------%d---%d--------\t?\n\n\n",T4, c2_2, c4_2);
    }


    if(T2 > T3){
        tmp = Tab2[1];
        Tab2[1] = Tab2[2];
        Tab2[2] = tmp;

        c5_1 = Tab2[1];
        c5_2 = Tab2[2];
        printf("Connecteur 4 : On échange la valeur %d avec %d\n", c5_1, c5_2);

        printf("%d\t----%d--------%d---------\t?\n",T1, c1_1, c3_1);
        printf("  \t    |         |          \n");
        printf("%d\t----|----%d---%d---%d----\t?\n",T2, c2_1, c3_2, c5_1);
        printf("  \t    |    |         |     \n");
        printf("%d\t----%d---|----%d---%d----\t?\n",T3, c1_2, c4_1, c5_2);
        printf("  \t         |    |          \n");
        printf("%d\t---------%d---%d---------\t?\n\n\n",T4, c2_2, c4_2);
    }else{
        c5_1 = Tab2[1];
        c5_2 = Tab2[2];
        printf("Connecteur 4 : Il n'y a pas d'échange\n");

        printf("%d\t----%d--------%d---------\t?\n",T1, c1_1, c3_1);
        printf("  \t    |         |          \n");
        printf("%d\t----|----%d---%d---%d----\t?\n",T2, c2_1, c3_2, c5_1);
        printf("  \t    |    |         |     \n");
        printf("%d\t----%d---|----%d---%d----\t?\n",T3, c1_2, c4_1, c5_2);
        printf("  \t         |    |          \n");
        printf("%d\t---------%d---%d---------\t?\n\n\n",T4, c2_2, c4_2);
    }

    printf("Fin du tri !\n\n");


    int Tab3[] = {c3_1, c5_1, c5_2, c4_2};
    printf("*****************************************\n");
    printf("*****************************************\n\n");
    printf("Après l'application du réseau de tri : \n\n");

    printf("%d\t----*---------*---------\t%d\n", T1, Tab3[0]);
    printf("  \t    |         |         \n");
    printf("%d\t----|----*----*----*----\t%d\n", T2, Tab3[1]);
    printf("  \t    |    |         |    \n");
    printf("%d\t----*----|----*----*----\t%d\n", T3, Tab3[2]);
    printf("  \t         |    |         \n");
    printf("%d\t---------*----*---------\t%d\n\n", T4, Tab3[3]);

    /* Affichage du tableau */
    printf("\nTableau trié : ");
    for (i=0; i<n; i++)
        printf("%d ", Tab3[i]);
    printf("\n\n");

}
