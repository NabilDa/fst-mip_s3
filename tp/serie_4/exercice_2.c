#include <stdio.h>
#include <stdlib.h>

typedef struct Etudiant
{
	char nom[50];
	float note;
} Etudiant;

/**
 * LireTabEtudiant - saisir un tableau d'etudiants de taille N
 * @tab: le tableau d'etudiants
 * @N: La taille du tableau
 */
void LireTabEtudiant(Etudiant *tab, int N)
{
	int i;

	for (i = 0; i < N; i++)
	{
		printf("Veuillez saisir le nom de l'etudiant numero %d : ", i + 1);
		scanf("%s", tab[i].nom);
		printf("Veuillez saisir la note de l'etudiant : ");
		scanf("%f", &tab[i].note);
	}
}

/**
 * AfficherTabEtudiant - Affiche un tableau d'etudiants de taille N
 * @tab: le tableau d'etudiants
 * @N: La taille du tableau
 */
void AfficherTabEtudiant(Etudiant *tab, int N)
{
	int i;

	for (i = 0; i < N; i++)
	{
		printf("L'etudiant %s a un note de %.2f\n", tab[i].nom, tab[i].note);
	}
}

/**
 * MoyennePromotion - calcule la note moyenne d'un tableau d'etudiants de taille N
 * @tab: le tableau d'etudiants
 * @N: la taille du tableau
 *
 * Return: la moyenne de la promotion
 */
float MoyennePromotion(Etudiant *tab, int N)
{
	int i;
	float somme;

	somme = 0;
	for (i = 0; i < N; i++)
	{
		somme += tab[i].note;
	}

	return (somme / N);
}

/**
 * ValiderModule - Affiche les noms d'etudiants ayant une note superieur
 *                 ou egale a 10
 * @tab: Le tableau d'etudiants
 * @N: la taille du tableau
 */
void ValiderModule(Etudiant *tab, int N)
{
	int i;

	for (i = 0; i < N; i++)
	{
		if (tab[i].note >= 10)
		{
			printf("%s\n", tab[i].nom);
		}
	}
}


/**
 * main - teste toute les fonctions precedentes
 *
 * Return: toujours 0.
 */
int main(void)
{
	int N;
	float moyenne;
	Etudiant *tab;

	printf("Veuillez donner le nombre d'etudiants dans la promotions : ");
	scanf("%d", &N);

	tab = (Etudiant *) malloc(N * sizeof(Etudiant));

	LireTabEtudiant(tab, N);

	AfficherTabEtudiant(tab, N);

	moyenne = MoyennePromotion(tab, N);
	printf("La moyenne de la promotion est : %.2f\n", moyenne);

	printf("Les etudiants qui ont valides le module sont :\n");
	ValiderModule(tab, N);

	return (0);
}
