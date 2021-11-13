#include<stdio.h>
#include<stdlib.h>

void hanoi(int, char, char, char);

int t = 0;

int main()
{
	int x;
	printf("輸入河內塔高達幾層:" );
	scanf_s("%d", &x);

	hanoi(x, 'A', 'B', 'C');

	printf("總共移動%d次\n",t);

	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("步驟%d，將第%d個圓盤由%c移動到%c\n", ++t,n,A,C);
	else
	{
		hanoi(n - 1, A, C, B);
		printf("步驟%d，將第%d個圓盤由%c移動到%c\n", ++t,n, A, C);
		hanoi(n - 1, B, A, C);
	}
}