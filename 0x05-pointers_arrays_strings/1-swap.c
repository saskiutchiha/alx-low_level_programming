/**
*  swap_int- Entry point
* @a: pointer to pass to swap_int function
* @b: pointer to pass to swap_int function
* Return: void (Success)
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
