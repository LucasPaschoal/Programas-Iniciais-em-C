#include <stdio.h>
int main ()
{
	float l1,l2,l3;
	printf("digite 3 lados de um triangulo\n");
	scanf("%f", &l1);
	scanf("%f", &l2);
	scanf("%f", &l3);
	if ((l1<l2+l3)&&(l2<l1+l3)&&(l3<l1+l2))
	{
		printf("estes valores formam um triangulo\n");
		if (l1==l2==l3) 
		{
			printf("triangulo sera equilatero\n");
		}
		if ((l1==l2!=l3) || (l2==l3!=l1) || (l1==l3!=l2))
		{
			printf("triangulo sera isosceles\n");
		}
		if ((l1!=l2) || (l2!=l3) || (l1!=l3))
		{
			printf("triangulo sera escaleno\n");
		}
	}
	else
	{
		printf("nao forma um triangulo\n");
	}
	system("PAUSE");
	return 0;
}
