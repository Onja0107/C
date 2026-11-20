/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  fact EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  LIRE N
  fact PREND_LA_VALEUR 1
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    fact PREND_LA_VALEUR fact*i
    FIN_POUR
  AFFICHER "le factoriel de N est:"
  AFFICHER fact
FIN_ALGORITHME */
#include <stdio.h>
int main()
{int N, i, fact;
printf ("Entrer la valeur de N:");
scanf ("%d",&N);
fact=1;
  for (i=1;i<N;i++)
  {fact=fact*i;
  }
printf ("%d!=%d",N,fact);
return(0);
}

