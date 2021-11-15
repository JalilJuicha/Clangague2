#include<unistd.h>
#include<stdio.h>

int	main()
{
	char caractere;
	
	printf("Entrer un caractére de votre choix : \n");
	scanf("%c",&caractere);
	
	switch (caractere)
	{
	
		case'a': printf("a est une voyelle\n");break;
		case'e': printf("e est une voyelle\n");break;
		case'i': printf("i est une voyelle\n");break;
		case'o': printf("o est une voyelle\n");break;
		case'u': printf("u est une voyelle\n");break;
		case'y': printf("y est une voyelle\n");break;
		case'A': printf("A est une voyelle\n");break;
		case'E': printf("E est une voyelle\n");break;
		case'I': printf("I est une voyelle\n");break;
		case'O': printf("O est une voyelle\n");break;							case'U': printf("U est une voyelle\n");break;							case 'Y': printf("Y est une voyelle\n");break;	
		default : printf("ce n'est pas une voyelle\n");	break;	
	}


	return 0;
}
