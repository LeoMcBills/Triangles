#include <stdio.h>

/**
 * main - Entry point
 * Description: This program draws a triangle on the screen
 * Return: Always 0
 */

int main(void)
{
	int x, y;

	x = 0;
	while (x < 12)
	{
		y = 0;
		while(y < x + 1)
		{
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
	printf("\n");
	return (0);
}
