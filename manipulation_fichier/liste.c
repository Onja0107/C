#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Date
{
	int jour;
	int mois;
	int annee;
};

struct Etudiant 
{
	int numero;
	char nom[100];
	char prenom[100];
	struct Date date_nais;
	char adresse[100];
	char niveau[10];
};

void ouvrir ( FILE **f ,char *fichier, char *mode );
void supprimer_espaces(char *tab);
void entrer_niveau(char *niveau);
void recup ( struct Etudiant *e ,char *niveau);
int ajoute ( FILE **f, struct Etudiant *e ,int *x);
void recup_data( FILE **f, struct Etudiant *e,int *n,char *niveau);
void trier_nom ( FILE **f, struct Etudiant *e,int *n);
void trier_date ( FILE **f, struct Etudiant *e,int *n);
void trier_adresse ( FILE **f, struct Etudiant *e,int *n);
void recherche(FILE **f);
void supprimer (FILE **f,struct Etudiant *e,int *n,char *niveau);
int modifier(FILE **f,struct Etudiant *e,int *n,char *niveau);

void ouvrir ( FILE **f , char *fichier,char *mode )
{
	*f=fopen(fichier,mode);
	if ( *f == NULL )
	{
		printf ("Erreur de creation du fichier\n");
	}
}

void supprimer_espaces(char *tab)
{
	int i;
	int j=0;
	int debut=0 , fin=(strlen(tab) - 1);
	while ( tab[debut] == ' ' )
	{
		debut++;
	}
	while (fin > debut && (tab[fin] ==' ' || tab[fin] == '\r' || tab[fin] == '\n') )
	{
		fin--;
	}
	
	for (i=debut;i<=fin;i++)
	{
		tab[j++]=tab[i];
	}
	tab[j]='\0';
	
}

void entrer_niveau(char *niveau )
{
	int i;
	char niv[5][100]={"L1","L2","L3","M1","M2"};
	int valide=0;
	printf("Entrer le niveau:");
	scanf("%s",niveau);
	for (i=0;i<5;i++)
	{
		if ( strcmp(niveau,niv[i]) == 0 )
		{
			valide=1;
		}
	}
	if ( valide == 0 )
	{
		printf("Niveau invalide\n");
		entrer_niveau(niveau);
	}
}

void recup ( struct Etudiant *e ,char *niveau)
{
	printf("Entrer votre nom: ");
	scanf(" %[^\n]",e->nom);
	supprimer_espaces(e->nom);
	
	printf("Entrer prenom(s): ");
	scanf(" %[^\n]", e->prenom );
	supprimer_espaces(e->prenom);
	
	printf("Entrer votre date de naissance jj/mm/aaaa: ");
	scanf("%d/%d/%d",&e->date_nais.jour,&e->date_nais.mois,&e->date_nais.annee);
	
	printf("Entrer votre adresse: ");
	scanf(" %[^\n]",e->adresse);
	supprimer_espaces(e->adresse);
	
	strcpy(e->niveau,niveau);
}


void choix_fichier( FILE **f,char *niveau,char *mode )
{
	if (strcmp( niveau,"L1") == 0 )
	{
		ouvrir(f,"L1.csv",mode);
	}
	else if (strcmp( niveau,"L2") == 0 )
	{
		ouvrir(f,"L2.csv",mode);
	}
	else if (strcmp( niveau,"L3") == 0 )
	{
		ouvrir(f,"L3.csv",mode);
	}
	else if (strcmp( niveau,"M1") == 0 )
	{
		ouvrir(f,"M1.csv",mode);
	}
	else if (strcmp( niveau,"M2") == 0 )
	{
		ouvrir(f,"M2.csv",mode);
	}
}



void recup_data( FILE **f,struct Etudiant *e, int *n,char *niveau)
{

	choix_fichier(f,niveau,"r");
	if (*f == NULL )
	{
		*n=0;
		return;
	}
	
	while(fscanf(*f,"%d,%[^,],%[^,],%d/%d/%d,%[^,],%s",&e[*n].numero,e[*n].nom,e[*n].prenom,&e[*n].date_nais.jour,&e[*n].date_nais.mois,&e[*n].date_nais.annee,e[*n].adresse,e[*n].niveau) == 8)
	{
		(*n)++;
		
	}
	
	fclose(*f);
	
}


int ajoute ( FILE **f,struct Etudiant *e,int *x )
{
	e->numero=(*x+1);
	fprintf(*f,"%d,%s,%s,%d/%d/%d,%s,%s\n",e->numero,e->nom,e->prenom,e->date_nais.jour,e->date_nais.mois,e->date_nais.annee,e->adresse,e->niveau);
	fclose(*f);
	return (1);
}


void ajoute_tab(FILE **f,struct Etudiant *e,int *n)
{
	int i;
	for (i=0;i<(*n);i++)
	{
		fprintf(*f,"%d,%s,%s,%d/%d/%d,%s,%s\n",e[i].numero,e[i].nom,e[i].prenom,e[i].date_nais.jour,e[i].date_nais.mois,e[i].date_nais.annee,e[i].adresse,e[i].niveau);
	}
}

void afficher(struct Etudiant *e, int *n)
{
	int i;
	for (i=0;i<(*n);i++)
	{
		printf("%d,%s,%s,%d/%d/%d,%s,%s\n",e[i].numero,e[i].nom,e[i].prenom,e[i].date_nais.jour,e[i].date_nais.mois,e[i].date_nais.annee,e[i].adresse,e[i].niveau);
	}
}

void trier_nom( FILE **f, struct Etudiant *e,int *n)
{
	struct Etudiant temp;
	int i;
	int j;
	for (i=0;i<(*n-1);i++)
	{
		for(j=i+1;j<(*n);j++)
		{
			if ( strcmp( e[i].nom, e[j].nom) > 0 )
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;	
			}
		}
	}
	afficher(e,n);
}
	
void trier_adresse( FILE **f, struct Etudiant *e, int *n)
{
	struct Etudiant temp;
	int i;
	int j;
	for (i=0;i<(*n-1);i++)
	{
		for (j=i+1;j<(*n);j++)
		{
			if (strcmp(e[i].adresse, e[j].adresse) > 0)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	afficher(e,n);

}

void trier_date_nais( FILE **f, struct Etudiant *e, int *n)
{
	int i;
	int j;
	struct Etudiant temp;
		
	
	for (i=0;i<(*n-1);i++)
	{
		for (j=i+1;j<(*n);j++)
		{

			if ( e[i].date_nais.annee < e[j].date_nais.annee )
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
			else if ( e[i].date_nais.annee == e[j].date_nais.annee && e[i].date_nais.mois < e[j].date_nais.mois )
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
			else if ( e[i].date_nais.annee == e[j].date_nais.annee && e[i].date_nais.mois == e[j].date_nais.mois && e[i].date_nais.jour < e[j].date_nais.jour )
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	afficher(e,n);
}
void recherche(FILE **f)
{
	int i=0;
	int trouve=0;
	char info[100];
	char ligne[500];
	char fichier[5][100]={"L1.csv","L2.csv","L3.csv","M1.csv","M2.csv"};
	printf("Entrer une information de la personne a rechercher:");
	scanf(" %99[^\n]",info);
	supprimer_espaces(info);

	printf("Resulat(s):\n");
	for (i=0;i<5;i++)
	{
		ouvrir(f,fichier[i],"a+");
		if ( *f == NULL )
		{
			continue;
		}

		while (fgets(ligne,sizeof(ligne),*f) != NULL )
			{
				if (strstr(ligne,info) != NULL )
				{
					printf("%s",ligne);
					trouve = 1;
					
				}
			}
	fclose(*f);
	}

	if ( trouve == 0)
	{
		printf("Aucun etudiant trouve\n");
	}
}

int verifier_num(struct Etudiant *e,int numero,int *n)
{
	int i;
	int trouve=0;
	for (i=0;i<(*n);i++)
	{
		if ( e[i].numero == numero )
		{
			trouve=1;
			break ;
		}
	}
	if ( trouve == 0 )
		
		{
			printf ("Aucun etudiant correspondant\n");
		}

			return (1);

}

void supprime(FILE **f,struct Etudiant *e,int *n,char *niveau)
{
	int pos;
	int i;
	
	printf("Entrer le numero de l etudiant a supprimer sur la liste:");
	scanf("%d",&pos);
	if (verifier_num(e,pos,n))
	{
	
		for (i=(pos-1);i<(*n)-1;i++)
		{
			e[i]=e[i+1];
		}
		(*n)--;
	
		for (i=0;i<(*n);i++)
		{
			e[i].numero=i+1;
		}
	
		choix_fichier(f,niveau,"w+");
		ajoute_tab(f,e,n);
		fclose(*f);
		printf("Etudiant supprime\n");
	}

}
		
int modifier(FILE **f, struct Etudiant *e, int *n,char *niveau)
{
	int i;
	int trouve=0;
	int choix;
	int numero;
	printf("Entrer le numero de l etudiant :");
	scanf("%d",&numero);
	verifier_num(e,numero,n);
	printf("Quelle information voulez-vous modifier (choisissez un numero):");
	printf("1.nom\n 2.prenom\n 3.date de naissance\n 4.adresse\n 5.niveau\n");
	printf("Votre choix");
	scanf("%d",&choix);

	if ( choix == 1 )
	{
		printf("Entrer le nouveau nom :");
		scanf("%s",e[numero-1].nom);
		supprimer_espaces(e[numero-1].nom);
	}
	else if ( choix == 2 )
	{
		printf("Entrer le nouveau prenom :");
		scanf("%s",e[numero-1].prenom);
		supprimer_espaces(e[numero-1].prenom);
	}
	else if ( choix == 3 )
	{
		printf("Entrer la nouvelle date de naissance :");
		scanf("%d/%d/%d",&e[numero-1].date_nais.jour,&e[numero-1].date_nais.mois,&e[numero-1].date_nais.annee);
	}
	else if ( choix == 4 )
	{
		printf("Entrer la nouvelle adresse :");
		scanf("%s",e[numero-1].adresse);
		supprimer_espaces(e[numero-1].adresse);
	}
	else if ( choix == 5 )
	{
		printf("Entrer niveau :");
		scanf("%s",e[numero-1].niveau);
		supprimer_espaces(e[numero-1].niveau);
	}
	else 
	{
		printf ("Aucun choix correspondant\n");
	}

	choix_fichier(f,niveau,"w+");
	ajoute_tab(f,e,n);
	fclose(*f);
	return (1);
}


void menu(int *choix)
{
	printf("\n");
	printf("========MENU========\n");
	printf("1.INSCRIPTION\n");
	printf("2.TRIER PAR MON\n");
	printf("3.TRIER PAR ADRESSE\n");
	printf("4.TRIER PAR DATE DE NAISSANCE\n");
	printf("5.RECHERCHE\n");
	printf("6.SUPPRIMER\n"); 
	printf("7.MODIFIER\n");
	printf("8.QUITTER\n");
        printf("\n");
	printf("Entrer le numero de votre choix:");
	scanf("%d",choix);
	printf("\n");

}

void execution(int *choix)
{

	FILE *file;
	int n=0;
	char niveau[10];
	struct Etudiant e;
	struct Etudiant etudiant[100];
	if (*choix == 1 )
	{
		entrer_niveau(niveau);
		recup(&e,niveau);
		recup_data(&file,etudiant,&n,niveau);
		choix_fichier(&file,niveau,"a");
		if ( ajoute(&file,&e,&n) )
		{
			printf("Inscription reussie!\n");
		}
	}
	else if ( *choix == 2 )
	{
		entrer_niveau(niveau);
		recup_data(&file,etudiant,&n,niveau);
		trier_nom(&file,etudiant,&n);
	}
	else if ( *choix == 3 )
	{
		entrer_niveau(niveau);
		recup_data(&file,etudiant,&n,niveau);
		trier_adresse(&file,etudiant,&n);
	}
	else if ( *choix == 4 )
	{
		entrer_niveau(niveau);
		recup_data(&file,etudiant,&n,niveau);
		trier_date_nais(&file,etudiant,&n);
	}

	else if ( *choix == 5 )
	{
		recherche(&file);
	}
	else if ( *choix == 6 )
	{
		entrer_niveau(niveau);
		recup_data(&file,etudiant,&n,niveau);
		supprime(&file,etudiant,&n,niveau);
	}
	else if ( *choix == 7 )
	{
		entrer_niveau(niveau);
		recup_data(&file,etudiant,&n,niveau);
		if ( modifier(&file,etudiant,&n,niveau))
		{
			printf("Element modifie avec succes!\n");
		}
	}
	else if ( *choix == 8)
	{
		exit (0) ;
	}
	else 
	{
		printf ("Choix invalide\n");
		menu(choix);
	}

}


int main ()
{

	int choix;
	while ( true ) 
	{
		menu(&choix);
		execution(&choix);
	}

	return (0);
}








