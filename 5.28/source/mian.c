#include<stdio.h>
#include<stdlib.h>

char sq(int y);

int main()
{
	char a;
	scanf_s("%c", &a);
	printf("%c ",sq(a));
	printf("\n");
	system("pause");
	return 0;
}

char sq(int y)
{
	if (y>=65 && y<=90)
	{
		return y + 32;
	}
	else
	{
		printf("error\n");
		return 0;
	}
	
}
