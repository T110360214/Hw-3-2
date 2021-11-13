#include<stdio.h>
#include<stdlib.h>

void hanoi(int, char, char, char);

int t = 0;

int main()
{
	int x;
	printf("��J�e���𰪹F�X�h:" );
	scanf_s("%d", &x);

	hanoi(x, 'A', 'B', 'C');

	printf("�`�@����%d��\n",t);

	system("pause");
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("�B�J%d�A�N��%d�Ӷ�L��%c���ʨ�%c\n", ++t,n,A,C);
	else
	{
		hanoi(n - 1, A, C, B);
		printf("�B�J%d�A�N��%d�Ӷ�L��%c���ʨ�%c\n", ++t,n, A, C);
		hanoi(n - 1, B, A, C);
	}
}