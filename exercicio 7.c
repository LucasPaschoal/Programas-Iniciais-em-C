#include <stdio.h>
void main ()
{
	int n,n1,n2,n3,n4;
	printf("digite um número\n");
	scanf("%d", &n);
	if (n%2==0)	
	{
		printf("e par\n");
	}
	if (n%2!=0)
	{
		printf("e impar\n");
	}
	if (n>0)
	{
		printf("e positivo\n");
	}
	if (n<0)
	{
		printf("e negativo\n");
	}
	if (n==0)
	{
		printf("e nulo");
	}
	if (n<10 && n>-10) 
	{
		printf("so tem um algarismo %d\n",n1);
	}
	if (n>=10 && n<=99 || n<=-10 && n>=-99)
	{
		n1= n/10;
		n=n%10;
		printf("tem dois algarismos %d e %d\n",n1,n);
	}
	if(n>=100 && n<=999 || n<=-100 && n>=-999)
	{
		n1=n/10;
		n=n%10;
		n2=n1/10;
		n1=n1%10;
		printf("tem 3 algarismos %d, %d e %d\n",n2,n1,n);
	}
	if (n>=1000 && n<=9999 || n<=-1000 && n>=-9999)
	{
		n1=n/10;
		n=n%10;
		n2=n1/10;
		n1=n1%10;
		n3=n2/10;
		n2=n2%10;
		printf("tem 4 algarismos %d, %d, %d e %d\n",n3,n2,n1,n);
	}
	if (n>=10000 && n<=99999 || n<=-10000 && n>-99999)
	{
		n1=n/10;
		n=n%10;
		n2=n1/10;
		n1=n1%10;
		n3=n2/10;
		n2=n2%10;
		n4=n3/10;
		n3=n3%10;
		printf("tem 4 algarismos %d, %d, %d, %d e %d\n",n4,n3,n2,n1,n);
	}
}
