char *create_array(unsigned int size, char c)

{
char* q;
int i;
q = malloc(size*sizeof(char));
for (i=0;i<size;i++)
{
*(q +i)= c;
}
return (q);
}
