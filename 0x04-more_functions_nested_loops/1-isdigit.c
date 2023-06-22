#include <stdio.h>
/**
*   _isdigit- Entry point
* @c: Number to pass to _isdigit function
* Return: integer (Success)
*/
int _isdigit(int c)
{
if (c < 58 && c > 47)
{
return (1);
}
else
{
return (0);
}
}
