#include<unistd.h>
#include<stdio.h>

int	main()
{
	float temp;

	printf("Entrer la valeur de la température de l'eau : \n");
	scanf("%f",&temp);

	if (temp <= 0)
	{
		printf("l'état de l'eau est : Glace \n");
	}
	else if (temp > 0 && temp <= 100)
	{
		printf("l'état de l'eau est  : Eau \n");
	}
	else
	{	
		printf("l'état de l'eau est : Vapeur \n");
	}
	return 0;
	
}

