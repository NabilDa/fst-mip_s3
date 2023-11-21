#include <stdio.h>

/**
 * aff_hexa - affiche les entiers de 0 a 15 dans la base hexadecimale
 */
void aff_hexa(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			printf("%d\n", i);
		}
		else
		{
			switch (i)
			{
			case 10:
				printf("A\n");
				break;
			case 11:
				printf("B\n");
				break;
			case 12:
				printf("C\n");
				break;
			case 13:
				printf("D\n");
				break;
			case 14:
				printf("E\n");
				break;
			case 15:
				printf("F\n");
				break;
			}
		}
	}

}

/**
 * aff_hexa_1 - affiche l'entier h dans la base hexadecimale
 * @h: l'entier a afficher
 */
void aff_hexa_1(int h)
{
	if (h < 10)
	{
		printf("%d", h);
	}
	else
	{
		switch (h)
		{
		case 10:
			printf("A");
			break;
		case 11:
			printf("B");
			break;
		case 12:
			printf("C");
			break;
		case 13:
			printf("D");
			break;
		case 14:
			printf("E");
			break;
		case 15:
			printf("F");
			break;
		}
	}
}


/**
 * hexa - convertir un entier de la base decimale vers la base hexadecimale
 * @n: l'entier a convertir
 */
void hexa(int n)
{
	if (n / 16 == 0)
	{
		aff_hexa_1(n % 16);
		return;
	}

	hexa(n / 16);
	aff_hexa_1(n % 16);
}


/**
 * main - teste les fonctions
 *
 * Return: toujours 0.
 */
int main(void)
{
	int n;

	printf("Veuillez entrer un entier n : ");
	scanf("%d", &n);

	hexa(n);
	printf("\n");

	return (0);
}
