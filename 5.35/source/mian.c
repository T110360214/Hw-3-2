#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned int fibonacci(int a);

int main()
{
	int x;
	printf("�A�Ʊ���o�ĴX���O���:");
	scanf_s("%d", &x);

	printf("�A�ҨD���Ƭ�:%d\n", fibonacci(x));

	system("pause");
	return 0;
}

unsigned int fibonacci(int a) 
{
	unsigned int w[100000];
	w[0] = 0;
	w[1] = 1;
	for (int i = 2; i <= a; i++)
		w[i] = w[i - 1] + w[i-2];
	return w[a];
}
