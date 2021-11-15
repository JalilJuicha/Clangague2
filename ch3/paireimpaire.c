#include<unistd.h>
#include<stdio.h>

int	main()
{
	int nombre;
	
	printf("Entrer un nombre de votre choix: \n");
	scanf("%d",&nombre);

	if(nombre%2==0)
		printf("%d est une nombre pair \n",nombre);
	else
		printf("%d est un nombre impair \n",nombre);

	return 0;
}

