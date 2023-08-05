unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int h,b =1;
unsigned int a;
h = n ^ m;
b = b << 63;
while (b>0)
{
if (b & h)
{
a++;
}
h = h>>1;
}
return a;
}
