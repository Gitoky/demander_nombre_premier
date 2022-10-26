#include <stdio.h>

int main()
{
	int nombre;
	printf("Saisir un nombre:  ");
	scanf("%i", &nombre);
	
		if(nombre==2)
			{
			printf("%i est un nombre Premier! \n", nombre);
			}
		else if (nombre%2==0)
		{
		printf("%i est un nombre Non Premier, ", nombre);
		printf("veuillez saisir un nombre impaire...");
		}

		else if(nombre%2!=0)
		{
			if (nombre%1==0||nombre%nombre==0)
			{
			printf("%i est un nombre Premier! \n", nombre);
			}
				
		}
	return 0;
}
/* 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
  31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
   73, 79, 83, 89, 97 nombre premier */ 

   /*
