#include <stdio.h>
/**
*   _isupper- Entry point
* @c: Number to pass to _isupper function
* Return: integer (Success)
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
