#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[])
{
long int a,b,i,j,num1 =0,prd =0,c=1,x;
 if (argc != 3 )
{
 printf("Error\n");
}
else
{
for (i=1;i<3;i++)
{
a = strlen(argv[i]);
for(j=0;j<a;j++ )
{
if (argv[i][j] < 48 || argv[i][j] > 57)
{
printf("Eroor\n");
return (0);
}
}
}
a = strlen(argv[1]);
b = strlen(argv[2]);
for (i=0; i < a;i++)
{
num1 = num1*10 + argv[1][i]-48;
}
for (i=b-1;i>=0;i--)
{
x = argv[2][i]-48;
prd = prd+  x* num1*c;
c = c *10;
}
 printf("%ld\n", prd);
}

return 0;
}
