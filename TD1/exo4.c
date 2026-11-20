/*FONCTIONS_UTILISEES
VARIABLES
  note1 EST_DU_TYPE NOMBRE
  note2 EST_DU_TYPE NOMBRE
  s EST_DU_TYPE NOMBRE
  m EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  LIRE note1
  LIRE note2
  s PREND_LA_VALEUR note1+note2
  m PREND_LA_VALEUR s/2
  AFFICHER "la somme est :"
  AFFICHER* s
  AFFICHER "la moyenne est:"
  AFFICHER* m
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{/*programme qui lit deux notes de type reel et affiche leur somme et leur moyenne*/
float a,b,s,m;
printf ("Entrer la valeur de a:");
scanf("%f",&a);
printf ("Entrer la valeur de b:");
scanf("%f",&b);
s=a+b;
m=s/2;
printf("La somme est:%f\n",s);
printf("La moyenne est:%f\n",m);
return(0);
}
