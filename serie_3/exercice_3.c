#include <stdio.h>

/**
 * indice_premier_occurence - cherche la premier occurence d'une valeur
 * dans un tableu
 * @T: le tableau a chercher
 * @N: La dimension du tableau
 * V: La valeur a trouver
 *
 * Return: l'indice de la premier occurence de V dans le tableau,
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
 * nombre_occurences - Calcule et affiche, le nombre totale d'occurence
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

int main(void)
{
	int *T, i, N, V;

	printf("Veuillez entrer la dimension de votre tableau : ");
	scanf("%d", &N);

	T = (int *) malloc(N * sizeof(int));

	for (i = 0; i < N; i++)
	{
		printf("Veuillez entrer T[%d] : ", i);
		scanf("%d", (T + i));
	}
	
