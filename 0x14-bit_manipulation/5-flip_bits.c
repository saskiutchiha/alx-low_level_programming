unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int h,b;
unsigned int a;
h = *n ^ *m;
b = b << 63;
while (b>0)
{
if (b & h)
{
a++;
}
}
return a;
}
