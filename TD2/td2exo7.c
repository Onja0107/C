#include <stdio.h>

int main()
{
	float P[2], U[2],V[2];
	int i;

	printf ("Les elements de U:\n");
	for (i=0;i<2;i++)
	{
		scanf(" %f",&U[i]);
	}

	printf ("Les elements de V:\n");
	for (i=0;i<2;i++)
	{
		scanf(" %f",&V[i]);
	}

	printf ("Leurs produits scalaires:\n");
       for (i=0;i<2;i++)
       {
		P[i]=U[i]*V[i];
 		printf ("P[%d] = %f\n",i,P[i]);
	}
return (0);
}

