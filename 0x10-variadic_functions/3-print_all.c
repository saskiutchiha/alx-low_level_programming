#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...) {

    
    int i=0;
    float f;
    char *s,c;

    va_list args;
    va_start(args, format);

    while (*(format+i) != '\0') {
        if (*(format+i) == 'c') {
            c = va_arg(args, int); // char is promoted to int when passed through ellipsis
            printf("%c", c);
        } else if (*(format+i) == 'i') {
            i = va_arg(args, int);
            printf("%d", i);
        } else if (*(format+i) == 'f') {
            f = va_arg(args, double); // float is promoted to double when passed through ellipsis
            printf("%f", f);
        } else if (*(format+i) == 's') {
            s = va_arg(args, char*);
            if (s != NULL) {
                printf("%s", s);
            } else {
                printf("(nil)");
            }
        }
        i++;
    }

    putchar('\n');
    va_end(args);
}
