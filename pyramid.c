#include <stdio.h>

int main()
{
int floor =5; // scanf_s를 사용할 경우  int floor;

printf("몇 층 피라미드를 만드시겠습니까?");
//scanf_s("%d", &floor);  
	for (int a = 0; a <= floor; a++)
	{
		for (int b = a; b <= floor-1; b++)
		{
			printf(" ");
		}
		for (int c = 0; c < 2*a -1; c++)
		{
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
