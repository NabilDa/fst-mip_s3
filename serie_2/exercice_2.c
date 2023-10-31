#include <stdio.h>
#include <math.h>


/**
 * Signe - verifie le signe de la somme de deux reels
 *
 * Return: 1 si la somme est positive, -1 si la somme est negative.
 */
int Signe(float A, float B)
{
	if (A >= 0)
	{
		if (B >= 0)
		{
			return (1);
		}
		else
		{
			if (A >= fabs(B))
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
	}
	else
	{
		if (B <= 0)
		{
			return (-1);
		}
		else
		{
			if (B >= fabs(A))
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
	}
}


/**
 * Check - verifie si x ou y sont compris entre 0 et n - 1
 * @x: la premiere variable a verifier
 * @y: la dexieme variable a verifier
 * @n: la borne superieur de comparaison
 *
 * Return: 1 si la verification est reussit, 0 sinon.
 */
int Check(int x, int y, int n)
{
	if ((x >= 0 && x <= n - 1) || (y >= 0 && y <= n - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * main - teste les fonctions Signe et Check
 *
 * Return: Toujours 0.
 */
int main(void)
{
	float A, B;
	int x, y, n;

	/* Test de la fonction Signe */
	printf("Test de la fonction Signe\n");
	printf("-------------------------\n");
	printf("Veuillez saisir A : ");
	scanf("%f", &A);
	printf("Veuillez saisir B : ");
	scanf("%f", &B);
	printf("Signe retourne par la fonction Signe est : %d\n\n", Signe(A, B));

	/* Test de la fonction Check */
	printf("Teste de la fonction Check\n");
	printf("--------------------------\n");
	printf("Veuillez saisir x : ");
	scanf("%d", &x);
	printf("Veuillez saisir y : ");
	scanf("%d", &y);
	printf("Veuillez saisir n : ");
	scanf("%d", &n);
	printf("Valeur retourne par la fonction Check : %d.\n", Check(x, y, n));

	return (0);
}
