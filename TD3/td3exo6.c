#include <stdio.h>
int main()
{ char T[100];
int i, palindrome,n;
palindrome=0;
printf ("Entrer le mot :");
scanf("%s",T);

n=0;
  while (T[n]!='\0')
  { n++;
 }
    for (i=0;i<n;i++)
    {if (T[i]==T[n-i-1])
     {palindrome =1;
     } else 
     {palindrome =0;
     }
    }
    if (palindrome ==1)
    {printf ("Palindrome\n");
    }
    else 
    {printf ("Pas palindrome\n");
    }
    return (0);
    }
