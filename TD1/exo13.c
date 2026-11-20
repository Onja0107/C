/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  m EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  LIRE N
  m PREND_LA_VALEUR 1
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    m PREND_LA_VALEUR m*i
    FIN_POUR
  AFFICHER "le resultat des multiplications:"
  AFFICHER m
  
  
FIN_ALGORITHME
*/
#include <stdio.h>
int main ()
{ int N,m,i;
printf ("Entrer la valeur de N:");
scanf("%d",&N);
m=1;
  for (i=1;i<N;i++)
  {m=m*i;
  }
  printf ("Le resulta des multilications est :%d",m);
  return(0);
  }
