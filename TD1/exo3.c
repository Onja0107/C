/*FONCTIONS_UTILISEES
VARIABLES
  A EST_DU_TYPE NOMBRE
  B EST_DU_TYPE NOMBRE
  temp EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  AFFICHER "entrer la valeur de A:"
  LIRE A
  AFFICHER "entrer la valeur de B:"
  LIRE B
  temp PREND_LA_VALEUR A
  A PREND_LA_VALEUR B
  B PREND_LA_VALEUR temp
  AFFICHER "la nouvelle valeur de A est:"
  AFFICHER* A
  AFFICHER "la nouvelle valeur de B est:"
  AFFICHER* B
FIN_ALGORITHME
*/
#include <stdio.h>
int main()
{/*programme permettant d echanger les valeurs de deux variables A et B et ce quel que soit leur contenu prealable*/
float A,B,t,a,b;
printf("Entrer la valeur de A:");
scanf("%f",&A);
printf("Entrer la valeur de B:");
scanf("%f",&B);
//on va d abord conserver les valeurs de A et B puiseau on en a besoin plus tard
a=A;
b=B;
//on va echanger les valeur maintenant
t=A;
A=B;
B=t;
printf("la nouvelle valeur de A:%f\n",A);
printf("la nouvelle valeur de B:%f\n",B);
//on va maintenat echanger trois valeurs 
float c;
printf ("Entrer la valeur de c:");
scanf("%f",&c);
t=a;
a=b;
b=c;
c=t;
printf("la nouvelle valeur de A:%f\n",a);
printf("la nouvelle valeur de B:%f\n",b);
printf("la nouvelle valeur de c:%f\n",c);
return(0);
}


