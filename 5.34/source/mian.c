#include<stdio.h>
#include<stdlib.h>


double pow(double, int);

void main()
{
	int k=0;	double a,b=0;

	printf("¿é¤Jbase©Mexp=\n");
	scanf_s( "%lf %d", &b, &k);
	a = pow(b, k);
	printf("A=%f\n",  a);

	system("pause");
}

double pow(double x, int n)
{
	double pow = 1;
	for (int i = 1; i <= n; i++)
	{
		pow *= x;
	}
	return pow;
}