#include <stdio.h>
int main ()
{
	int n,n1,n2,n3,n4,n5;
	printf("Digite um numero\n");
	scanf("%f", &n);
	n1=n%10;
	n2=n%100;
	n3=n%1000;
	n4=n%10000;
	n5=n%100000;
	if(n%2==0)
	{
		printf("o numero e par\n");
	}
	if (n%2!=0)
	{
		printf("o numero e impar\n");
	}
	if (n>0)
	{
		printf("e positivo\n");
	}
	if (n<0)
	{
		printf("e negativo\n");
	}
	if (n=0)
	{
		printf("e nulo\n");
	}
	if (n>=0 && n<10)
	{
		printf("possui um algarismo %d\n",n1);
	}
	if (n>=10 && n<100)
	{
		printf("ele tem dois algarismos %d e %d\n",n2,n1);
	}
	if (n>=100 && n<1000)
	{
		printf("ele tem tres algarismos %d, %d e %d\n",n3,n2,n1);
	}
	if (n>=1000 && n<10000)
	{
		printf("ele tem quatro algarismos %d, %d, %d e %d\n",n4,n3,n2,n1);
	}
	if (n>=10000 && n<100000)
	{
		printf("ele tem cinco algarismos %d, %d, %d, %d e %d\n",n5,n4,n3,n2,n1);
	}
	system("PAUSE");
	return 0;
}
