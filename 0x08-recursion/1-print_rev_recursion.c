#include <stdio.h>
void _print_rev_recursion(char *s) {
    if (*s == '\0') {
        return;  // Base case: end of the string
    }
    
    _print_rev_recursion(s + 1);  // Recursive call with the next character
    
    printf("%c", *s);  // Print the current character
}
