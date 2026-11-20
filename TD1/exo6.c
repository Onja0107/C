/*FONCTIONS_UTILISEES
VARIABLES
  nb1 EST_DU_TYPE NOMBRE
  nb2 EST_DU_TYPE NOMBRE
  coef1 EST_DU_TYPE NOMBRE
  coef2 EST_DU_TYPE NOMBRE
  m EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer la valeur de nb1:"
  LIRE nb1
  AFFICHER "entrer son coefficient:"
  LIRE coef1
  AFFICHER "entrer la valeur de nb2:"
  LIRE nb2
  AFFICHER "entrer son coefficient:"
  LIRE coef2
  m PREND_LA_VALEUR (nb1*coef1+nb2*coef2)/(coef1+coef2)
  AFFICHER "la moyenne est:"
  AFFICHER* m
  
  
FIN_ALGORITHME
*/
#include <stdio.h>
int main ()
{float nb1,nb2,m;
int coef1,coef2;
printf ("Entrer la valeur de nb1:");
scanf ("%f",&nb1);
printf ("Entrer son coefficient:");
scanf("%d",&coef1);
printf ("Entrer la valeur de nb2 :");
scanf ("%f",&coef2);
printf ("Entrer son coefficient :");
scanf ("%d",&coef2 );
m=(nb1*coef1+nb2*coef2)/(coef1 +coef2);
printf ("La moyenne est :%f",m);
return (0);
}
