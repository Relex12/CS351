#include <stdio.h>

/*
l'ann�e 2017 n'est pas bissextile 
l'ann�e 2016 est bissextile
l'ann�e 2000 est bissextile
l'ann�e 2100 n'est pas bissextile
*/


int main() {
	int i;
	printf ("Entrez une annee\t");
	scanf ("%d", &i);

	if (i % 4 == 0) 
	{
		if ( i % 100 == 0)
		{
			if (i % 400 == 0)
				printf ("l'annee %d est bissextile\n", i);
			else 
				printf ("l'annze %d n'est pas bissextile\n", i);
		}
		else 
			printf ("l'annee %d est bissextile\n", i);
	}
	
	else 
		printf ("l'annee %d n'est pas bissextile\n", i);

	return (0);

}