#include <stdio.h>

/**
 * main - Entry point
 * Description: A right angled from the rear
 * Return: Always 0
 */

int main(void)
{
	int x, y, z;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < (8 - x))
		{
			printf("#");
			y++;
		}
		printf("\n");
		x++;
	}
	printf("\n");
	return (0);
}
