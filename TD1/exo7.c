/*FONCTIONS_UTILISEES
VARIABLES
  v EST_DU_TYPE LISTE
  max EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  POUR i ALLANT_DE 0 A 2
    DEBUT_POUR
    LIRE v[i]
    FIN_POUR
  max PREND_LA_VALEUR v[0]
  POUR i ALLANT_DE 0 A 2
    DEBUT_POUR
    SI (v[i]>max) ALORS
      DEBUT_SI
      max PREND_LA_VALEUR v[i]
      FIN_SI
    FIN_POUR
  AFFICHER "la valeur max est:"
  AFFICHER max
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{float v[3],max;
int i;
  for (i=0;i<3;i++)
  {printf("Entrer la valeur de v[%d]:",i);
  scanf("%f",&v[i]);
  }
  max=v[0];
    for (i=0;i<3;i++)
      { if (v[i]>max )
      {max=v[i];
      }
    }
    printf("La valeur maximale est :%f\n",max);
    return(0);
    }
