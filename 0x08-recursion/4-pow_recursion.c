/**
* _pow_recursion- Entry point
* @x: Number to pass to  _pow_recursion function
* @y: Number to pass to  _pow_recursion function
* Return: integer (Success)
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
