/*FONCTIONS_UTILISEES
VARIABLES
  nb EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer la valeur de n:"
  LIRE nb
  SI (nb>0) ALORS
    DEBUT_SI
    AFFICHER "positif"
    FIN_SI
    SINON
      DEBUT_SINON
      SI (nb<0) ALORS
        DEBUT_SI
        AFFICHER "negatif"
        FIN_SI
        SINON
          DEBUT_SINON
          AFFICHER "nul"
          FIN_SINON
      FIN_SINON
  
  
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{/*programme qui demande un nombre a l utilisateur et l informe ensuite si ce nombre est positif ou negatif */
float n;
printf ("Entrer la valeur de n:");
scanf("%f",&n);
  if (n>0)
  {printf("positif \n");
  }
    else if (n<0)
    {printf ("negatif\n");
    } 
      else if (n==0)
      {printf("nul\n");
      }
       
        return (0);
        }
