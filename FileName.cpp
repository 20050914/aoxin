#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//     * * * 
//     * *
//     *
//     * *
//     * * *     2
int main()
{
	int a, i, j;
	while (scanf("%d", &a) != EOF)
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j < a + 1 - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		printf("*\n");
		int c = 2;
		for(i=0;i<a;i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("* ");
			}
			printf("\n");
			c++;
		}
	}
}