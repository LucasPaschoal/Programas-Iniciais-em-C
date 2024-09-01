#include <stdio.h>
int main ()
{
	float a,p;
	char s;
	printf("digite sua altura\n");
	scanf("%f", &a);
	printf("digite f para feminino e m para masculino\n");
	scanf(" %c", &s);
	if (s=='m')
	{
		p=((72.7*a)-58);
		printf("seu peso ideal: %f\n",p);
	}
	if (s=='f')
	{
		p=((62.1*a)-44.7);
		printf("seu peso ideal: %f\n",p);
	}
	system("PAUSE");
	return 0;
}
