#include <stdio.h>
int main ()
{
	float t,vm,d,l;
	printf("Digite o tempo gasto na viagem\n");
	scanf("%f", &t);
	printf("Digite a velocidade madia\n");
	scanf("%f", &vm);
	d=(vm*t);
	l=(d/14);
	printf("Seu tempo gasto foi de %f, sua velocidade media %f, a distancia percorrida foi %f voce gastou %f litros\n",t,vm,d,l);
	system("PAUSE");
	return 0;
}
