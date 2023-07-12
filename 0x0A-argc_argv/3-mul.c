#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *@argc : variable to pass to main function
 *@argv : variable to pass to main function
 * Return: Always 0 (Success)
 */
int main (int argc , char *argv[])
{
long int sum1 = 0, i, j, sum2 = 0, x = 0, y;
if (argc == 1 || argc == 2)
{
printf("Error\n");
}
else
{
for (i = 1; i < 3; i++)
{
y = strlen(argv[i]);
for (j = 0; j < y; j++)
{
if (argv[i][j]=='-')
{
x++;
}
else
{
if (i == 1)
{
sum1 = sum1 * 10 + argv[i][j] - 48;
}
else
{
sum2 = sum2 * 10 + argv[i][j] - 48;
}
}
}
}
if (x==1)
{
printf("%ld\n",-sum1 * sum2);
}
else
{
printf("%ld\n",sum1 * sum2);
}
}
return (0);
}






