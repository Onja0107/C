#include <stdio.h>
#include <stdlib.h>


void recup (int *t, int *n, char *c);
void sup(int *t1, int *t2, int *t,int *n1,int *n2,int *k);
void cond(int *t1, int *t2,int *n1, int *n2,int *t,int *k);
void result(int *t,int *k);

void recup(int *t, int *n, char *c)
{
	int i;
	printf ("Entrer le nombre des elements de %s:",c);
	scanf("%d",n);
	printf ("Entrer les elements de %s :\n",c);
	for (i=0;i<*n;i++)
	{
		printf ("%s[%d] = ",c,i);
		scanf("%d",&t[i]);
	}
}

void sup(int *t1,int *t2,int *t,int *n1, int *n2,int *k)
{
	int i,j,bo;
	*k=0;
	for (i=0;i<(*n1);i++)
	{
		bo=0;
		for (j=0;j<(*n2);j++)
		{
			if (t1[i]==t2[j])
			{
				bo=1;
				continue;
			}

		}
		if (bo==0)
		{
			t[(*k)++]=t1[i];
		}

	}
}

void cond (int *t1,int *t2,int *n1, int *n2,int *t,int *k)
{
	int i,j,nb=0;
	for (i=0;i<*n1;i++)
	{
		for (j=0;j<*n2;j++)
		{
			if (t1[i]==t2[j])
			{
				nb++;
			}
		}
	}

	if (nb != (*n2))
	{
		printf ("t2 n existe pas dans t1\n");
		exit(0);
	}

	else if (nb==(*n2))
	{
		sup(t1,t2,t,n1,n2,k);
	}
}

void result (int *t,int *k)
{
	int i;
	printf ("Les nouveaux elements de t1:\n");
	for (i=0;i<(*k);i++)
	{
		printf ("t1[%d] = %d \n",i,t[i]);
	}
}

int main ()
{
	int t1[100],t2[100],t[100];
	int n1,n2,n;
	recup(t1,&n1,"t1");
	recup(t2,&n2,"t2");
	cond(t1,t2,&n1,&n2,t,&n);
	result(t,&n);
	return (0);
}




