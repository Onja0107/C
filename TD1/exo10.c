/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  LIRE N
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    SI (N%i==0) ALORS
      DEBUT_SI
      AFFICHER* i
      FIN_SI
    FIN_POUR
FIN_ALGORITHME */
#include <stdio.h>
#include <math.h>
int main()
{int N,i;
printf ("Entrer la valeur de N:");
scanf("%d",&N);
  for (i=0;i<N;i++)
  {if (N%i==0)
    {printf ("%d\n",i);
    }
  }
  return (0);
  }

