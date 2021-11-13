#include<stdio.h>
#include<stdlib.h>

int LCM(int a, int b);

void main()
{
	int a,b;

	printf("two numbers's lcm:\n");
	scanf_s("%d %d", &a,&b);
	printf("LCM=%d\n", LCM(a,b));

	system("pause");
}

int LCM(int a, int b)
{
	int c;
	if (a > b)
		c = a;
	else
		c = b;

	for (int i = c; i <=a*b; i++)
	{
		if(i%a==0 && i%b==0)
			return i;
	}
}
