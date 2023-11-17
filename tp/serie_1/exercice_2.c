#include <stdio.h>

/**
 * main - calcule le plus grand nombre premier inferieur a un N
 *
 * Return: 0 toujours vrai.
 */
int main(void)
{
	int N, i, j, pr;

	do
	{
		printf("Veuillez entre votre N: ");
		scanf("%d", &N);
	} while (N <= 0);

	if (N <= 3)
	{
		printf("Il y a pas de nombre premier strictement inferieur a %d.\n", N);
	}
	else
	{
		pr = 3;
		for (i = 2; i < N; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					break;
				}
				else if (j == (i - 1))
				{
					pr = i;
					break;
				}
			}
		}
		printf("Le plus grand premier inferieur a %d est: %d.\n", N, pr);
	}

	return (0);
}
