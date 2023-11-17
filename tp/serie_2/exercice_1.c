#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcule la somme, le produit, et la moyenne de N entiers
 *
 * Return: Toujours 0.
 */
int main(void)
{
	int i, N;
	float somme, produit, moyenne;

	do
	{
		printf("Veuillez saisir N : ");
		scanf("%d", &N);
	} while (N <= 0);

	somme = 0;
	produit = 1;
	for (i = 0; i < N; i++)
	{
		int *p;
		p = malloc(sizeof(int));

		printf("Veuillez saisir l'entier %d : ", i + 1);
		scanf("%d", p);

		somme += *p;
		produit *= *p;
	}
	moyenne = somme / N;

	printf("La somme de toute les entiers est : %.2f.\n", somme);
	printf("Le produit de toute les entiers est : %.2f.\n", produit);
	printf("La moyenne de toute les entiers est : %.2f.\n", moyenne);

	return (0);
}
