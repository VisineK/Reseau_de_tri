#include <../shared/qstd.h>
using namespace qstd;

#include <stdio.h>
#include "tri.h"

int main()
{
    while(true){
        int t;

        cout<< "**********************  Projet Reseau de Tri  *********************" << endl << endl;

        /* Programme principale Tri */
        Tri();

        /* Pour recommencer */
        printf("\n Recommencer --> Appuyer sur n'importe quelle touche puis entrer\t");
        scanf("%d", &t);
        if(t){
            system("clear");
        }
    }
}
