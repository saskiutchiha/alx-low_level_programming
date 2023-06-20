void print_alphabet(void);
print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
int j;
for (j = 0; j < 10; j++)
{
print_alphabet(void);
}
