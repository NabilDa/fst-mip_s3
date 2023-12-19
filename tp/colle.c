#include <stdio.h>
#include <stdlib.h>

typedef struct rectangle
{
	int longueurCm;
	int largeurCm;
} rectangle;

void saisirTableauRectangle(rectangle *t, int N)
{
	int i;

	for (i = 0; i < N; i++)
	{
		printf("Veuillez saisir la longueur du rectangle %d en cm : ", i + 1);
		scanf("%d", &t[i].longueurCm);
		printf("Veuillez saisir la largeur du meme rectangle en cm : ");
		scanf("%d", &t[i].largeurCm);
	}
}

void afficherTableauRectangle(rectangle *t, int N)
{
	int i;

	for (i = 0; i < N; i++)
	{
		printf("Le rectangle %d a une longueur de %d cm et une largeur de %d cm.\n", i + 1, t[i].longueurCm, t[i].largeurCm);
	}
}

void MinMaxRectangle(rectangle *t, int N, int *indice_min, int *indice_max)
{
	int i, perimetre_max, perimetre_min, perimetre_1;

	*indice_min = 0;
	*indice_max = 0;
	perimetre_min = 2 * (t[0].longueurCm + t[0].largeurCm);
	perimetre_max = 2 * (t[0].longueurCm + t[0].largeurCm);

	for (i = 1; i < N; i++)
	{
		perimetre_1 = 2 * (t[i].longueurCm + t[i].largeurCm);

		if (perimetre_1 > perimetre_max)
		{
			*indice_max = i;
			perimetre_max = perimetre_1;
		}
		else if (perimetre_1 < perimetre_min)
		{
			*indice_min = i;
			perimetre_min = perimetre_1;
		}
	}
}


void TrierTableauRectangles(rectangle *t, int N)
{

	int i, tri, non_triee, aire_1, aire_2;
	rectangle aide;

	non_triee = N - 2;
	do
	{
		tri = 1;
		for (i = 0; i < non_triee; i++)
		{
			aire_1 = t[i].longueurCm * t[i].largeurCm;
			aire_2 = t[i + 1].longueurCm * t[i + 1].largeurCm;

			if (aire_1 > aire_2)
			{
				aide = t[i];
				t[i] = t[i + 1];
				t[i + 1] = aide;

				tri = 0;
			}
			non_triee--;
		}
	} while (tri != 1);
}


int main(void)
{
	int N, *indice_min, *indice_max, perimetre_min, perimetre_max;
	rectangle *t;

	indice_min = (int *) malloc(sizeof(int));
	indice_max = (int *) malloc(sizeof(int));

	printf("Veuillez saisir le nombre de rectangles : ");
	scanf("%d", &N);

	t = (rectangle *) malloc(N * sizeof(rectangle));

	saisirTableauRectangle(t, N);

	afficherTableauRectangle(t, N);

	MinMaxRectangle(t, N, indice_min, indice_max);
	perimetre_min = 2 * (t[*indice_min].longueurCm + t[*indice_min].largeurCm);
	perimetre_max = 2 * (t[*indice_max].longueurCm + t[*indice_max].largeurCm);
	printf("L'indice du rectangle qui a le perimetre minimal est : %d, son perimetre est : %d\n", *indice_min, perimetre_min);
	printf("L'indice du rectangle qui a le perimetre maximal est : %d, son perimetre est : %d\n", *indice_max, perimetre_max);

	TrierTableauRectangles(t, N);

	afficherTableauRectangle(t, N);

	free(t);
	free(indice_min);
	free(indice_max);

	return (0);
}
