#include <stdio.h>
int main ()
{
	float n1,n2,n3;
	printf("digite 3 nuemros que serao colocados na ordem decrescente\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	if ((n1>=n2)&&(n1>=n3)&&(n2>=n3))
	{
		printf("%f,%f,%f\n",n1,n2,n3);
	 } 
	if ((n1>=n2)&&(n1>=n3)&&(n3>=n2))
	{
		printf("%f,%f,%f\n",n1,n3,n2);
	}
	if ((n2>=n1)&&(n2>=n3)&&(n1>=n3))
	{
		printf("%f,%f,%f\n",n2,n1,n3);
	}
	if ((n2>=n1)&&(n2>=n3)&&(n3>=n1))
	{
		printf("%f,%f,%f\n",n2,n3,n1);
	}
	if ((n3>=n1)&&(n3>=n2)&&(n1>=n2))
	{
		printf("%f,%f,%f\n",n3,n1,n2);
	}
	if ((n3>=n1)&&(n3>=n2)&&(n2>=n1))
	{
		printf("%f,%f,%f\n",n3,n2,n1);
	}
	system("PAUSE");
	return 0;
}
