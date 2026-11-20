*/FONCTIONS_UTILISEES
VARIABLES
  n EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  nb_div EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer la valeur de n:"
  nb_div PREND_LA_VALEUR 0
  POUR i ALLANT_DE 1 A n
    DEBUT_POUR
    SI (n%i==0) ALORS
      DEBUT_SI
      nb_div PREND_LA_VALEUR nb_div+1
      FIN_SI
    FIN_POUR
  SI (nb_div==2) ALORS
    DEBUT_SI
    AFFICHER* "premier"
    FIN_SI
    SINON
      DEBUT_SINON
      AFFICHER* "pas premier"
      FIN_SINON
 FIN_ALGORITHME
*/
#include <stdio.h>
#include <math.h>
int main()
{int n,i,nb_div;
printf("Entrer la valeur de n:");
scanf("%d",&n);
nb_div=0;
	 for (i=1;i<=n;i++);
	 {	if (n%i==0)
	      {nb_div=nb_div+1;
	      }
	  }
	  if (nb_div==2)
	  {printf ("premier ");
	  }
	  else if 
	  {printf ("pas prmier ");
	  }
return (0);
}
