#include <stdio.h>

void recup(int *n);
void inserer(int *t,int *n);
void result(int *t);

void recup(int *n)
{
	printf("Entrer l element a inserer:");
	scanf("%d",n);
}

void inserer(int *t, int *n)
{
	int i;
	int position;
	for (i=0;i<10;i++)
	{
		if (t[i]<*n)
		{
			position=i;
		}
	}

	for (i=11 ;i>position;i--)
	{
		t[i]=t[i-1];
	}
	t[position+1]=*n;
}

void result (int *t)
{
	int i;
	printf ("Nouveaux elemets du tableau:\n");
	for (i=0;i<11;i++)
	{
		printf ("t[%d] = %d\n",i,t[i]);
	}
}

int main ()
{
	int t[100]={0,2,4,6,8,10,12,14,16,18};
	int x;
	recup(&x);
	inserer(t,&x);
	result(t);
	return (0);
}

