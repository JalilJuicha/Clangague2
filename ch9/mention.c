#include<unistd.h>
#include<stdio.h>

int	main()
{
	
	float moyenne;

	printf("Entrer votre moyenne : \n");
	scanf("%f",&moyenne);
	
	if (moyenne >=10 && moyenne <12)
		{printf("votre mention %0.2f est <<passable>>\n",moyenne);}             
	else if (moyenne >=12 && moyenne <14)               
       		{printf("votre mention %0.2f est <<assez bien>>\n",moyenne);}	
	else if (moyenne >=14 && moyenne <16)		
		{printf("votre mention %0.2f est <<bien>>\n",moyenne);}
	else if (moyenne >=16)		
		{printf("votre mention %0.2f est <<trés bien>>\n",moyenne);}
	else 	{printf("Mention non reconue . \n");}
	
	return 0;

}

