#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int	main()
{
	int annee,choix;
	printf("Entrer un nombre d´année : \n");
	scanf("%d",&annee);

	float mois = annee *12;	
	float jours = annee *365;
	float heures = annee *365*24;
	float minutes = annee *365*24*60;
	float secondes = annee *365*24*60*60;
	
	printf("Pour convertir en mois (appuyer sur 1),Pour convertir en jours (appuyer sur 2),Pour convertir en heures (appuyer sur 3),Pour convertir en minutes (appuyer sur 4),Pour convertir en secondes (appuyer sur 5):\n");
	scanf("%d",&choix);

	switch(choix)
	{
		case 1: printf("le nombre de mois est : %0.1f\n",mois);break;
		case 2: printf("le nombre de jours est : %0.1f\n",jours);break;
		case 3: printf("le nombre des heures est : %0.1f\n",heures);break;
		case 4: printf("le nombre des minutes est : %0.1f\n",minutes);break;
		case 5: printf("le nombre des secondes est : %0.1f\n",secondes);break;
		default:printf("Entrer un nombre valide. \n");
		break;	
	}

	return 0;
}

