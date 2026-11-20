#include <stdio.h>

void entrer(float *t, char *s);
void somme (float *u, float *v, float *w);
void resultat (float *t);

 
void entrer (float *t,char *s )
{	
	int i;
	printf ("Entrer les elements du vecteur %s:\n",s);
	for (i=0;i<2;i++)
		{ printf ("Element %d:",i);
		  scanf ("%f", t+i );
		}
}

void somme (float *u, float *v, float *w)
{	int i;
	for (i=0;i<2;i++)
		{ w[i]=u[i]+v[i];
                }

}

void resultat( float *t)
{ int i;
	printf ("Les resultats:\n");
	for (i=0;i<2;i++)
	{ printf ("%f\n",t[i]);
	}
}



int main()
{ float u[2],v[2],z[2];
 
 entrer(u,"u");
 entrer(v,"v");
 somme(u,v,z);
 resultat(z);
 return (0);
}
