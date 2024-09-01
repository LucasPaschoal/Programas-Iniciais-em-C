#include <stdio.h>
int main ()
{
	float b,B,h,r;
	printf("digite a base menor, a base maior e a altura de um trapésio\n");
	scanf("%f", &b);
	scanf("%f", &B);
	scanf("%f", &h);
	r=(((B+b)*h)/2);
	printf("a area dp trapezio e %f\n",r);
	system("PAUSE");
	return 0;
}
