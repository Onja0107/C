#include <stdio.h>
  void entrer (int *a ,int *b);
  void entrer (int *a ,int *b)
  { printf ("Entrer la valeur de a:");
  scanf("%d",a);
  printf ("Entrer la valeur de b:");
  scanf("%d",b);
     }
   
    int somme(int a,int b);
    int somme (int a,int b)
    { int res;
    res=a+b;
    return (res);
    }

      void result (int c);
      void result (int c)
      { printf ("Le resultat est :%d\n",c);
      }

        int main()
        { int a,b,c;
        entrer(&a,&b);
        c =somme (a,b);
        result (c);

return (0);
}
