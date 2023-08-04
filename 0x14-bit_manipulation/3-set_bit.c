int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int h;
h =1;
if (index > 64)
{
return -1;
}
h = h << index;
*n = h | *n;
return 1;
}
