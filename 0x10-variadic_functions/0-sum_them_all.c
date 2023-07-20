#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
int a = n,i,x,sum=0;
va_list arg;
va_start(arg, a);
for (i=0;i<a;i++)
{
x = va_arg(arg,int);
sum = sum + x;
}
va_end(arg);
return sum;

}
