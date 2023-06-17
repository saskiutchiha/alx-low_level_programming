#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a == 0)
{
<<<<<<< HEAD
printf("last digit of %d is 0 and is 0",n);
=======
printf("Last digit of %d is 0 and is 0\n", n);
>>>>>>> 457bad0c44eb953d7f93f86f10d5c1de8e80c922
}
if (a > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
if (a < 6 && a != 0)
{
<<<<<<< HEAD
printf("last digit of %d is %d and is less than 6", n, a);
=======
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
>>>>>>> 457bad0c44eb953d7f93f86f10d5c1de8e80c922
}
return (0);
}
