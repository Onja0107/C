/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  LIRE N
  POUR i ALLANT_DE 0 A N-1
    DEBUT_POUR
    AFFICHER* i
    FIN_POUR
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{ int N,i;
printf("Entrer la valeur de N:");
scanf("%d",&N);
 for (i=1;i<=N;i++)
 {printf("%d\n",i);
 }
 return(0);
 }

