#include <stdio.h>

void afficher(int *t);
void recup(int *n);
void sup(int *t, int *n);
void result(int *t);

void afficher (int *t)
{
	int i;
	printf ("Les elements du tableau :\n");
	for (i=0;i<11;i++)
	{
		printf ("t[%d] = %d\n",i,t[i]);
	}
}

void recup(int *n)
{
	printf ("Entrer l element a supprimer:");
	scanf("%d",n);
}

void sup (int *t, int *n)
{
	int i;
	int position;
	for (i=0;i<11;i++)
	{
		if (t[i]==*n)
		{
			position=i;
		}
	}
	for (i=position;i<11;i++)
	{
		t[i]=t[i+1];
	}

}

void result (int *t)
{
	int i;
	printf ("Les nouveaux elements du tableau :\n");
	for (i=0;i<10;i++)
	{
		printf ("t[%d] = %d \n",i,t[i]);
	}
}

int main ()
{
	int tab[100]={1,3,5,7,9,11,13,15,17,19,21};
	int x;
	afficher(tab);
	recup(&x);
	sup(tab,&x);
	result(tab);
	return (0);
}

