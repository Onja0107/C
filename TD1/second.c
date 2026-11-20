/*FONCTIONS_UTILISEES
VARIABLES
  a EST_DU_TYPE NOMBRE
  b EST_DU_TYPE NOMBRE
  c EST_DU_TYPE NOMBRE
  delta EST_DU_TYPE NOMBRE
  x EST_DU_TYPE NOMBRE
  x1 EST_DU_TYPE NOMBRE
  x2 EST_DU_TYPE NOMBRE
DEBUT_ALGORITHME
  LIRE a
  LIRE b
  LIRE c
  delta PREND_LA_VALEUR (b*b )-(4*a*c)
  SI (((a==0) && (b!=0) && (c!=0)) || ((a==0) && (b!=0) && (c==0))) ALORS
    DEBUT_SI
    AFFICHER* "l equation est du premier degre:"
    x PREND_LA_VALEUR -c/b
    AFFICHER "la solution est:"
    AFFICHER* x
    FIN_SI
    SINON
      DEBUT_SINON
      SI (((a==0) && (b==0)&& (c!=0)) || ((a==0) && (b==0) && (c==0))) ALORS
        DEBUT_SI
        AFFICHER* "pas d equation a resoudre"
        FIN_SI
        SINON
          DEBUT_SINON
          SI (delta<0) ALORS
            DEBUT_SI
            AFFICHER* "pas de solution reel"
            FIN_SI
            SINON
              DEBUT_SINON
              SI (delta==0) ALORS
                DEBUT_SI
                x PREND_LA_VALEUR -b/(2*a)
                AFFICHER "une solution:"
                AFFICHER* x
                FIN_SI
                SINON
                  DEBUT_SINON
                  SI (delta>0) ALORS
                    DEBUT_SI
                    x1 PREND_LA_VALEUR (-b-sqrt(delta))/(2*a)
                    x2 PREND_LA_VALEUR (-b+sqrt(delta))/(2*a)
                    AFFICHER* "deux solutions:"
                    AFFICHER x1
                    AFFICHER " et "
                    AFFICHER* x2
                    FIN_SI
                  
                  
                  
                  FIN_SINON
              FIN_SINON
          
          
          
          
          
          
          FIN_SINON
      FIN_SINON
  
  
  
  
FIN_ALGORITHME
*/
#include <stdio.h>
#include <math.h>
int main ()
{ //resoudre une equation du second degre 
float a,b,c,delta,x_1,x_2,x;
printf("Entrer la valeur de a:\n");
scanf("%f",&a);
printf("Entrer la valeur de b:\n");
scanf("%f",&b);
printf("Entrer la valeur de c:\n");
scanf("%f",&c);
delta= (b*b)-(4*a*c);
if (a==0 && b!=0 && c!=0)
  {printf("L equation n est pas du second degre\n");
  }
 
    else if (a!=0)
    {
      if (delta ==0)
      {
      x= -b -(2*a);
      printf (" une solution x=%f\n",x);
      }
        else if (delta>0)
        {
        x_1=(-b + sqrt(delta))/(2*a);
        x_2=(-b - sqrt(delta))/(2*a);
        printf("deux solutions : x_1=%f et x_2=%f\n",x_1 ,x_2);
        
        }
          else if (delta<0)
          {printf ("pas de solution reelle\n");
        }
    }
    else 
    {printf ("error\n");
    }
          
      return (0);
     
    }  
