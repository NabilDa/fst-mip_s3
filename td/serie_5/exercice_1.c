#include <stdio.h>
#include <string.h>

/**
 * main - main function
 */
int main(void)
{
	int i, check, longueur;
	char verbe[20];

	check = 0;
	do {
		printf("Veuillez entrer le verbe : ");
		scanf("%s", verbe);

		longueur = strlen(verbe);
		if (verbe[longueur - 2] == 'e' && verbe[longueur - 1] == 'r')
		{
			check = 1;
		}
	} while (check == 0);

	for (i = 0; i < 6; i++)
	{
		switch (i)
		{
		case 0:
			printf("je %sai", verbe);
			break;
		case 1:
			printf("tu %sas", verbe);
			break;
		case 2:
			printf("il %sa", verbe);
			break;
		case 3:
			printf("nous %sons", verbe);
			break;
		case 4:
			printf("vous %sez", verbe);
			break;
		case 5:
			printf("ils %sont", verbe);
		}

		if (i == 2 || i == 5)
			printf("\n");
		else
			printf("\t");
	}

	return (0);
}
