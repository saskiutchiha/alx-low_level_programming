#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {

    
    int i;
    float f;
    char *s,c;

    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == 'c') {
            c = va_arg(args, int); // char is promoted to int when passed through ellipsis
            printf("%c", c);
        } else if (*format == 'i') {
            i = va_arg(args, int);
            printf("%d", i);
        } else if (*format == 'f') {
            f = va_arg(args, double); // float is promoted to double when passed through ellipsis
            printf("%f", f);
        } else if (*format == 's') {
            s = va_arg(args, char*);
            if (s != NULL) {
                printf("%s", s);
            } else {
                printf("(nil)");
            }
        }
        format++;
    }

    putchar('\n');
    va_end(args);
}
