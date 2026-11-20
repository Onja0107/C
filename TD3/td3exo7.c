#include <stdio.h>
int main()
{ char T[1000];
int n,i,a,es;
printf ("Entrer le mot :");
scanf("%s",T);
n=0;
  while (T[n]!='\0')
  {n++;
  }
    for (i=0;i<n;i++)
    { if (T[i]=='a')
       { a++;
       }
        else if (T[i]=='e' && T[i+1]=='s')
        { es++;
        }
        }
          printf ("Le nombre de repetition de la lettre 'a' est :%d\n",a); 
          printf ("Le nombre de repetition du mot 'es'est :%d\n",es);
          
        return (0);
}
