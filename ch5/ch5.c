#include<unistd.h>
#include<stdio.h>

int	main()	
{
	int a,b,somme;
	printf("Entrer le premier nombre :\n");
	scanf("%d",&a);
	printf("Entrer le deuxiéme nombre : \n");
	scanf("%d",&b);

	somme=a+b;
	if (a==b)
	{
		printf("le triple des deux valeurs identiques est :%d \n",somme*3);
	}
	else
       	{
		printf("la somme des deux valeurs non identiques est : %d \n",somme);
	}

	return 0;

}

