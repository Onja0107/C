#include <stdio.h>

int main ()
{
	int T[100], A[100],B[100];
	int i,j,M,N,t;
	printf ("Entrer la valeur de N:");
	scanf("%d",&N);
	printf ("Entrer la valeur de M:");
	scanf("%d",&M);
	
	printf ("Les elements de A:\n");
	for (i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}

	printf("Les elements de B:\n");
	for (j=0;j<M;j++)
	{
		scanf("%d",&B[j]);
	}

//ajouter les elements de B a la fin de A

	for (i=0;i<N;i++)
	{
		T[i]=A[i];
	}

	for (j=0;j<M;j++)
	{
		T[N+j]=B[j];
	}

	printf ("Les elements de B ajoutes a la fin de A:\n");
	for (t=0;t<(M+N);t++)
	{
		printf ("%d\n",T[t]);
	}

	return (0);
}



