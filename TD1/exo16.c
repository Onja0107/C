/*FONCTIONS_UTILISEES
VARIABLES
  N EST_DU_TYPE NOMBRE
  i EST_DU_TYPE NOMBRE
  fact EST_DU_TYPE NOMBRE
  s EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer la valeur de N:"
  LIRE N
  s PREND_LA_VALEUR 0
  fact PREND_LA_VALEUR 1
  POUR i ALLANT_DE 1 A N
    DEBUT_POUR
    fact PREND_LA_VALEUR fact*i
    s PREND_LA_VALEUR s+fact
    FIN_POUR
  AFFICHER "la somme est :"
  AFFICHER s
  
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{int N,i,fact,s;
printf ("Entrer la valeur de N:");
scanf("%d",&N);
s=0;
fact=1;
  for (i=1;i<=N;i++)
  {fact=fact*i;
  s=s+fact;
  }
printf("La valeur de la somme est :%d",s);
return(0);
}
