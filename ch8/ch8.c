#include<unistd.h>
#include<stdio.h>

int	main()
{
	int a;

	printf("Entrer un nombre de votre choix : \n");
	scanf("%d",&a);

	if (a>0)
	{
		printf("le nombre %d est positif. \n",a);
	}
	else if (a<0)
	{
		printf("le nombre %d est négatif . \n",a);
	}	
	else
	{
		printf("le nombre %d est nul . \n",a);
	}
	return 0;

}

