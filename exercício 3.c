#include <stdio.h>
int main ()
{
	float n1,n2,n3,m;
	printf("Digite suas 3 notas\n");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	m=(((n1*2)+(n2*3)+(n3*5))/10);
	printf("sua media ponderada foi %f\n",m);
	system("PAUSE");
	return 0;
}
