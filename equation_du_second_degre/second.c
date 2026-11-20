
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
