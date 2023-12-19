#include <stdio.h>
#include <stdlib.h>

/**
 * main - calcule le transposer d'une matrice
 *
 * Return: toujours 0.
 */
int main(void)
{
	float **T, **tT;
	int NL, NC, i, j;

	/* Demande de la dimension du tableau */
	printf("Veuillez entrer la dimension de votre tableau (n, m) : ");
	scanf("%d%d", &NL, &NC);

	/* Allocation de la memoire pour les tableau */
	T = (float **) malloc(NL * sizeof(float *));
	for (i = 0; i < NL; i++)
	{
		T[i] = (float *) malloc(NC * sizeof(float));
	}

	tT = (float **) malloc(NC * sizeof(float *));
	for (i = 0; i < NC; i++)
	{
		tT[i] = (float *) malloc(NL * sizeof(float));
	}

	/* Remplir le tableau T */
	for (i = 0; i < NL; i++)
	{
		for (j = 0; j < NC; j++)
		{
			printf("Veuillez entrer T[%d][%d] : ", i, j);
			scanf("%f", &T[i][j]);
		}
	}

	/* Remplir le transpose tT */
	for (i = 0; i < NC; i++)
	{
		for (j = 0; j < NL; j++)
		{
			tT[i][j] = T[j][i];
		}
	}

	/* Affichage des resultats */
	printf("*/ Affichage du tableau T */\n");
	for (i = 0; i < NL; i++)
	{
		for (j = 0; j < NC; j++)
		{
			printf("T[%d][%d] = %.2f\t\t", i, j, T[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");

	printf("*/ Affichage du tableau tT */\n");
	for (i = 0; i < NC; i++)
	{
		for (j = 0; j < NL; j++)
		{
			printf("tT[%d][%d] = %.2f\t\t", i, j, tT[i][j]);
		}
		printf("\n");
	}

	/* Liberation de la memoire */
	for (i = 0; i < NL; i++)
	{
		free(T[i]);
	}
	free(T);

	for (i = 0; i < NC; i++)
	{
		free(tT[i]);
	}
	free(tT);

	return (0);
}
