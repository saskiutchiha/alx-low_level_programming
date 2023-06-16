#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n,a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n%10;
if (a == 0)
{
printf("last digit of %d is 0 and is 0",n);
}
if (a > 5)
{
printf("last digit of %d is %d and is greater than 5", n, a);
}
if (a < 6 && a != 0)
{
printf("last digit of %d is %d and is less than 6", n, a);
}
return (0);
}
