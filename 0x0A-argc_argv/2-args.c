#include <stdio.h>
/**
 * main - Entry point
 *@argc : variable to pass to main function
 *@argv : variable to pass to main function
 * Return: Always 0 (Success)
 */
int main(int argc, char* argv[])
{
int i;
for (i=0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
