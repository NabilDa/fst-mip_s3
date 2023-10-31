#include <stdio.h>

/**
 * main - calcule la commission
 *
 * Return: toujours 0.
 */
int main(void)
{
	unsigned int code,prix,commission;

	do
	{
		printf("Veuillez saisir le code qui correspond au service, avec :\n"
		       "1, pour vente de voiture neuve.\n"
		       "2, vente de voiture d'occasion.\n"
		       "3, pour vente des pièces de rechange.\n"
		       "4, pour réparation des voitures.\n");
		scanf("%u", &code);
	} while (code < 1 || code > 4);
	printf("Veuillez saisir le prix totale du service en DH: ");
	scanf("%u", &prix);

	switch (code)
	{
	case 1:
	{
		commission = 0.02 * prix;
		if (commission > 5000)
		{
			commission = 5000;
		}
	}
	case 2:
	{
		commission = 0.05 * prix;
		if (commission < 500)
		{
			commission = 500;
		}
	}
	case 3:
	{
		commission = 0.06 * prix;
	}
	case 4:
	{
		commission = 0.1 * prix;
	}
	}
	printf("Montant de la commission: %u DH\n", commission);

	return (0);
}
