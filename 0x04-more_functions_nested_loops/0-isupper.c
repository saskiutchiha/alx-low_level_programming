#include <stdio.h>
/**
*   _isupper- Entry point
* @c: Number to pass to _isupper function
* Return: integer (Success)
*/
int _isupper(int c)
{
if (c > 63 && c < 98)
{
return (1);
}
else
{
return (0);
}
}
