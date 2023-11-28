#include <stdio.h>
#include <stdlib.h>

/**
 * indice_premier_occurence - cherche la premier occurence d'une valeur
 * dans un tableu
 * @T: le tableau ou on cherche
 * @N: La dimension du tableau
 * @V: La valeur a trouver
 *
 * Return: l'indice de la premiere occurence de V dans le tableau,
 * et -1 si la valeur n'existe pas dans le tableau.
 */
int indice_premier_occurence(int *T, int N, int V)
{
	int i;

	for (i = 0; i < N; i++)
	{
		if (T[i] == V)
		{
			return (i);
		}
	}

	return (-1);
}

/**
 * nombre_occurences - Calcule et affiche, le nombre totale d'occurences
 * de la valeur V dans le tableu T, ainsi que l'indice de chaque occurence
 * @T: Le tableau
 * @N: La dimension du tableau
 * @V: La valeur a chercher
 */
void nombre_occurences(int *T, int N, int V)
{
	int i, cpt = 0;

	for (i = 0; i < N; i++)
	{
		if (T[i] == V)
		{
			cpt++;
			printf("L'indice de l'occurence numero %d est : %d\n", cpt, i);
		}
	}
	printf("Le nombre totale d'occurences de V dans le tableau est : %d\n", cpt);
}

/**
 * main - teste les deux fonctions precedentes
 *
 * Return: toujours 0.
 */
int main(void)
{
	int *T, i, N, V;

	do
	{
		printf("Veuillez entrer la dimension de votre tableau : ");
		scanf("%d", &N);
	} while (N <= 0);

	T = (int *) malloc(N * sizeof(int));

	for (i = 0; i < N; i++)
	{
		printf("Veuillez entrer T[%d] : ", i);
		scanf("%d", &T[i]);
	}

	printf("Veuillez entrer la valeur a chercher dans le tableau : ");
	scanf("%d", &V);

	if (indice_premier_occurence(T, N, V) == -1)
	{
		printf("La valeur %d n'existe pas dans le tableau.\n", V);
	}
	else
	{
		printf ("L'indice de la premiere occurence de la valeur %d dans "
			"le tableau est : %d\n", V, indice_premier_occurence(T, N, V));
	}
	nombre_occurences(T, N, V);

	free(T);

	return (0);
}
