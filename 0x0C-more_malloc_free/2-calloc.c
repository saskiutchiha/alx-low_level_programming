void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
 return NULL;
}
else
{
return malloc(nmemb * size);
}
}
