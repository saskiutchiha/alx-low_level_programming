/**
* factorial- Entry point
* @n: Number to pass to  factorial function
* Return: integer (Success)
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
