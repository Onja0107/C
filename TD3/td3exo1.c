/*VARIABLES:
 N   entier
 pair   entier 
 impair   entier
 tab[100]   tableau entier
 tpair[100]   tableau entier 
 timpair[100]   tableau entier
 newtab[100]   tableau entier 

DEBUT:
AFFICHER "Entrer la valeur de N:"
LIRE N
AFFICHER "Entrer les elements du tableau"
POUR i allant 0 a N
LIRE tab[i]
FINPOUR

POUR i allant de 0 a N 
SI tab[i] modulo 2 =0 ALORS
tpair prend la valeur de tab[i]





*/
#include <stdio.h>
#include <math.h>

void recup( int *t, int *n);
void trier(int *t,int *n);
void fonc(int *t, int *n,int *tpair,int *timpair,int *pair,int *impair, int *newtab);
void affiche( int *t,int *n);
void recup(int *t, int *n)
{
	int i;
	printf("Entrer la valeur de n:");
	scanf("%d",n);
	printf ("Entrer les elements du tableau :\n");
	for (i=0;i<*n;i++)
	{
		printf ("t[%d] = ",i);
		scanf("%d",(t+i));
	}
}

void trier(int *t,int *n)
{
	int i,j,temp;
	for (i=0;i<(*n-1);i++)
	{	for (j=i+1;j<(*n);j++)
		{
			if (t[i]>t[j])
			{
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
			}
		}
	}
}

void fonc (int *t,int *n,int *tpair,int *timpair,int *pair,int *impair,int *newtab)
{
	int i;
	for (i=0;i<*n;i++)
	{
		if (t[i]%2==0)
		{
			tpair[*pair]=t[i];
			(*pair)++;
		}
		 else if (t[i]%2 != 0)
		 {
		 	timpair[*impair]=t[i];
			(*impair)++;
		}

	}
	trier(tpair,pair);
	trier(timpair,impair);

	for (i=0;i<(*pair);i++)
	{
		newtab[i]=tpair[i];
	}

	for (i=0;i<(*impair);i++)
	{
		newtab[(*pair)+i]=timpair[i];
	}

}

void afficher( int *t, int *n)
{
	int i;
	printf  ("Nouvel ordre des elements du tableau:\n");
	for (i=0;i<*n;i++)
	{
		printf ("t[%d] = %d\n",i,t[i]);
	}
}

int main ()
{
	int N,pair=0,impair=0;
	int tab[100];
	int newtab[100];
	int tpair[100];
	int timpair[100];
	recup(tab,&N);
	fonc(tab,&N,tpair,timpair,&pair,&impair,newtab);
	afficher(newtab,&N);
	return (0);
}


