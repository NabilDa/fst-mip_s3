#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, N, indice_min, indice_max;
	float t[50], somme, moyenne, distance, ValeurPP;

	/* Saisi de N */
	do
	{
		printf("Veuillez saisir N : ");
		scanf("%d", &N);
	} while (N <= 0 || N > 50);

	/**
	  Remplir le tableu, determiner indice_min, determiner indice_max,
	  et calculer la somme de toutes les valeur du tableu
	*/
	somme = 0;
	for (i = 0; i < N; i++)
	{
		do
		{
			printf("Veuillez entrer t[%d] : ", i);
			scanf("%f", &t[i]);
		} while (t[i] == 0);

		if (i == 0)
		{
			indice_min = 0;
			indice_max = 0;
		}
		else
		{
			if (t[i] > t[indice_max])
			{
				indice_max = i;
			}
			else if (t[i] < t[indice_min])
			{
				indice_min = i;
			}
		}

		somme += t[i];
	}

	/* Calcule de la moyenne, et de la valeur la plus proche de la moyenne */
	moyenne = somme / N;
	distance = fabs(moyenne - t[0]);
	ValeurPP = t[0];
	for (i = 1; i < N; i++)
	{
		if (fabs(moyenne - t[i]) < distance)
		{
			distance = fabs(moyenne - t[i]);
			ValeurPP = t[i];
		}
	}

	/* Affichage */
	for (i = 0; i < N; i++)
	{
		printf("t[%d] = %.2f\n", i, t[i]);
	}

	printf("La valeur maximale est : %.2f, son indice est : %d\n", t[indice_max], indice_max);
	printf("La valeur minimale est : %.2f, son indice est : %d\n", t[indice_min], indice_min);
	printf("La moyenne de ce tableau est : %.2f\n", moyenne);
	printf("La valeur la plus proche de la moyenne est : %.2f\n", ValeurPP);

	return (0);
}
