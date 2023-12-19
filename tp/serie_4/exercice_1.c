#include <stdio.h>
#include <string.h>

/**
 * LgChaine - calcule le nombre de characteres dans une chaine de characteres
 * @ch: la chaine de characters
 *
 * Return: le nombre de character dans ch.
 */
int LgChaine(char *ch)
{
	int nb_char;

	nb_char = 0;
	while (ch[nb_char] != '\0')
	{
		nb_char++;
	}

	return (nb_char);
}

/**
 * main - manipule des chaines de charactere
 *
 * Return: toujours 0.
 */
int main()
{
	char ch1[30], ch2[50], help[50];
	int taille_ch1, taille_ch2, comp;

	/* Saisie de ch1 et ch2 */
	printf("Veuillez saisir la premiere chaine : ");
	scanf("%s", ch1);
	printf("Veuillez saisir la dexieme chaine : ");
	scanf("%s", ch2);

	/* Affichage des chaines ch1 et ch2 */
	puts(ch1);
	puts(ch2);

	/* Affichage des tailles en utilisant LgChaine */
	taille_ch1 = LgChaine(ch1);
	taille_ch2 = LgChaine(ch2);
	printf("La taille de ch1 en utilisant la fonction LgChaine est : %d\n", taille_ch1);
	printf("La taille de ch2 en utilisant la fonction LgChaine est : %d\n", taille_ch2);

	/* Affichage des tailles en utilisant strlen */
	taille_ch1 = strlen(ch1);
	taille_ch2 = strlen(ch2);
	printf("La taille de ch1 en utilisant la fonction strlen est : %d\n", taille_ch1);
	printf("La taille de ch2 en utilisant la fonction strlen est : %d\n", taille_ch2);

	/* Comparaison des deux chaines */
	comp = strcmp(ch1, ch2);
	if (comp < 0)
	{
		puts("ch1 est inferieur a ch2");
	}
	else if (comp == 0)
	{
		puts("ch1 est la meme que ch2");
	}
	else
	{
		puts("ch1 est superieur a ch2");
	}

	/* permutation des deux chaines ch1 et ch2 */
	strcpy(help, ch2);
	strcpy(ch2, ch1);
	strcpy(ch1, help);

	return (0);
}
