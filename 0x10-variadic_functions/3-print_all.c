#include <stdio.h>
#include <stdarg.h>

void print_arguments(const char * const format, ...) {
int i;
char type;
    va_list args;
    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++) {
        type = format[i];
       switch (type) {
            case 'i':
                printf("%d ", va_arg(args, int));
                break;
            case 'f':
                printf("%f ", va_arg(args,double));
                break;
            case 'c':
                printf("%c ", va_arg(args, int)); 
                break;
            case 's':
                
    if (va_arg(args, char*) == NULL)
{
printf("(nil)");
}
if (va_arg(args, char*) != NULL)
{
printf("%s ", va_arg(args, char*));
}
                break;
            default:
                break;
        }  
    }

    putchar('\n');
    va_end(args);
}
