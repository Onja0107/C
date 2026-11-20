*/
FONCTIONS_UTILISEES
VARIABLES
  nb1 EST_DU_TYPE NOMBRE
  nb2 EST_DU_TYPE NOMBRE
  reste EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer la valeur de nb1:"
  LIRE nb1
  AFFICHER "entrer la valeur de nb2:"
  LIRE nb2
  reste PREND_LA_VALEUR nb1%nb2
  TANT_QUE (reste>0) FAIRE
    DEBUT_TANT_QUE
    nb1 PREND_LA_VALEUR nb2
    nb2 PREND_LA_VALEUR reste
    reste PREND_LA_VALEUR nb1%nb2
    FIN_TANT_QUE
  AFFICHER "leur PGCD est :"
  AFFICHER nb2
FIN_ALGORITHME
*/
#include <stdio.h>
#include <math.h>
int main()
{int nb1,nb2,r;
printf ("Entrer la valeur de nb1:");
scanf("%d",&nb1);
printf ("Entrer la valeur de nb2:);
scanf("%d",&nb2);
r=nb1%nb2;
	while (r>0)
	{nb1=nb2;
	nb2=r;
	r=nb1%nb2;
	}
	printf ("Leur PGCD est %d",nb2);
	return(0);
	}
