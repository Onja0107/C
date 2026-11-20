#include <stdio.h>

int main()
{
	int A[100];
	int N,i,min,max,pmin,pmax;

	printf ("Entrer la valeur de N:");
	scanf("%d",&N);

	printf ("Les elements du tableau entier A:\n");
	for (i=0;i<N;i++)
	{
		printf ("Element %d :",i);
		scanf("%d",&A[i]);
	}

//afficher max
	
	max=A[0];
	for (i=0;i<N;i++)
	{
		if (A[i]>max)
		{
			max=A[i];
		}
	}
	printf ("La valeur maximale :%d\n",max);

//afficher min
	
	min=A[0];
	for (i=0;i<N;i++)
	{
		if (A[i]<min)
		{
			min=A[i];
		}
	}
	printf ("La valeur minimale :%d\n",min);

//afficher leurs positions
	
	for (i=0;i<N;i++)
	{
		if (A[i]==max)
		{
			pmax=i;
			break;
		}
	}
	
	for (i=0;i<N;i++)

	{
       		if (A[i]==min)
		{
			pmin=i;
			break;
		}
	}
	printf ("La position de max est :%d\n", pmax);
	printf ("La position de min est :%d\n", pmin);
	return (0);
}

