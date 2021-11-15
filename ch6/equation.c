#include<unistd.h>
#include<stdio.h>
#include<math.h>

int	main()
{
	float a,b,c,delta;
	printf("Entrer la valeur a :\n");
		scanf("%f",&a);
	printf("Entrer la valeur b :\n");
	        scanf("%f",&b);
	printf("Entrer la valeur c :\n");
	        scanf("%f",&c);
	delta = (b*b)-4*a*c;
	
	if (delta == 0)
	{
		printf("Equation accepte une solution :%.1f \n ",-b/2*a);
	}
	else if (delta > 0)
	{
		printf("Equation accepte deux solutions :%.1f et %.1f \n",(-b-sqrt(delta))/(a*2),(-b+sqrt(delta))/(a*2));
	}
	else 
	{
		printf("Equation n'admet pas de solution. \n");
	}
	return 0;
}

