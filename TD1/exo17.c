/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  S EST_DU_TYPE NOMBRE
  fact EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "enterr la valeur de N:"
  S PREND_LA_VALEUR 0
  fact PREND_LA_VALEUR 1
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    fact PREND_LA_VALEUR fact*i
    S PREND_LA_VALEUR S+(1/fact)
    FIN_POUR
  AFFICHER "la somme est :"
  AFFICHER S
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{ int N,i,fact;
float S;
printf ("Entrer la valeur de N:");
scanf("%d",&N);
S=0;
fact=1;
  for (i=1;i<=N;i++)
  {fact=fact*i;
  S=S+(1/fact);
  }
  printf ("La somme S est:%f",S);
  return(0);
  }
