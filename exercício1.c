#include <stdio.h>
int main ()
{
	int i;
	printf("Digite sua idade\n");
	scanf("%d", &i);
	if (i>=18)
	{
		printf("Voce eh obrigado a votar\n");
	}
	else
	{
		printf("Voce nao eh obrigado a votar\n");
	}
	system("PAUSE");
	return 0;
}
