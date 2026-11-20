/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  s EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  LIRE N
  s PREND_LA_VALEUR 0
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    s PREND_LA_VALEUR s+i
    FIN_POUR
  AFFICHER "la somme est:"
  AFFICHER s
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{int N,i,s ;
printf ("Entrer la valeur de N:");
scanf("%d",&N);
s=0;
  for (i=0;i<N;i++)
  {s=s+i;
  }
  printf ("La somme est :%d",s);
  return(0);
  }
