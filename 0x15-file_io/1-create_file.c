#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
/**
 * create_file - Entry point
 *@letters : variable to pass to  create_file function
 *@filename : variable to pass to  create_file function
 * Return: int (Success)
 */

int create_file(const char *filename, char *text_content) {
    FILE *f;
    f = fopen(filename, "w"); 
    if (f == NULL) {
        return 0;
    }

    fwrite(text_content, 1, strlen(text_content), f);
    fclose(f);
    return 1;
}
