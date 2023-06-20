#include <stdio.h>
/**
 * @brief Prints the English alphabet in lowercase.
 * This function prints the English alphabet in lowercase characters from 'a' to 'z',
 * each letter on a separate line.
 *
 * @return void
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
putchar('\n');
}
