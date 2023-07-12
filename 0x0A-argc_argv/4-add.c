#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *@argc : variable to pass to main function
 *@argv : variable to pass to main function
 * Return: Always 0 (Success)
 */
int main (int argc, char *argv[])
{
long int sum1 = 0, i, j, sum2 = 0, z = 0, y;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
sum1 = 0;
y = strlen(argv[i]);
for (j = 0; j < y; j++)
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
z = 1;
printf("Error\n");
break;
}
sum1 = sum1 * 10 + argv[i][j] - 48;
}
if (z == 1)
{
break;
}
sum2 = sum2 + sum1;
}
if (z != 1)
{
printf("%ld\n", sum2);
}
}
return (0);
}

