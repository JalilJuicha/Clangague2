#include<unistd.h>
#include<stdio.h>

int	main()

{

	float temperature;
	printf("Entrer la température en Fahrenheit : \n ");
	scanf("%f",&temperature);

	temperature = (temperature - 32) * 5/9;

	printf("Température en Celsius : %f\n", temperature);
	
	if (temperature < 0)
	printf("Température très froide\n");
	
	else if (temperature < 20)
	printf("Température froide\n");
	
	else if (temperature < 30)
	printf("Température chaude\n");
	
	else
	printf("Température très chaude\n");

	return 0;

}
