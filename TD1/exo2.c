/*FONCTIONS_UTILISEES
VARIABLES
  nb1 EST_DU_TYPE NOMBRE
  nb2 EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer la valeur de nb1"
  LIRE nb1
  AFFICHER "entrer la valeur de nb2:"
  LIRE nb2
  SI (nb1>0 && nb2>0) ALORS
    DEBUT_SI
    AFFICHER* "le produit est positif"
    FIN_SI
    SINON
      DEBUT_SINON
      SI ((nb1>0 && nb2<0) || (nb1<0 && nb2>0)) ALORS
        DEBUT_SI
        AFFICHER* "le produit est negatif"
        FIN_SI
      FIN_SINON
  
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{/*programme qui demande deux nombres a l utilisater et l informe ensuite si leuer produit est positif ou negtif */
float a,b,c ;
printf("Entrer la valeur de a:");
scanf("%f",&a);
printf("Entrer la valeur de b:");
scanf("%f",&b);
c=a*b;
  if (c>0)
  {printf("le produit est positif\n");
  }
    else if (c<0)
    {printf("le produit est negatif\n");
    }
      else if (c==0)
      {printf("le produit est nul\n");
      }
      return(0);
      }
    
