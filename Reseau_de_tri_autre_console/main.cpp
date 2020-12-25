#include <../shared/qstd.h>
using namespace qstd;

#include <stdio.h>
#include "tri.h"

int main(){

    while(true){
        Tri t;
        int choix_Tri;

        printf("*************************** Projet Reseau de Tri ***************************\n\n");

        printf("Choisissez le réseau de tri :   1.Tri à bulle        2.Tri par selection \n\t\t\t\t3.Tri par insertion  4.Tri par permutation\n");
        printf("Votre choix : ");
        scanf("%d", &choix_Tri);

        if(choix_Tri == 1){
            t.Tri_Bulle();
        }else if(choix_Tri == 2){
            t.Tri_Selection();
        }else if(choix_Tri == 3){
            t.Tri_Insertion();
        }else if(choix_Tri == 4){
            t.Tri_Permutation();
        }
    }
}

