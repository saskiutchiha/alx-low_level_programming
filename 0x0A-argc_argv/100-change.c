#include <stdio.h>
#include <string.h>
int main (int argc , char* argv[])
{
int sum1=0,j,z=0,y;
if (argc !=2)
{
printf("Error\n");
}
else
{
if (argv[1][0]=='-')
{
printf("0\n");
}
else
{
y = strlen(argv[1]);
for (j=0;j<y;j++)
{
 
sum1 = sum1*10 + argv[1][j] - 48;
}
while(sum1 != 0)
{
if (sum1 >= 25)
{
 sum1 = sum1 - 25 ;
z++;
}
else
{
if (sum1 >= 10)
{
sum1 = sum1 - 10;
z++;
}
else 
{
if (sum1 >= 5)
{
sum1 = sum1 - 5;
z++;
}
else
{
if (sum1 >= 2)
{
sum1 = sum1 - 2;
z++;
}
else
{
sum1--;
z++;
}
}
}
}
}
printf("%d\n",z);
}
}
return (1);
}
