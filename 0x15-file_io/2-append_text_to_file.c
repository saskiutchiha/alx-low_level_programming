#include <stdio.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content) {
    FILE *f;
    if (filename == NULL) {
        return -1;
    }

    if (text_content == NULL) {
        return 1; 
    }

f = fopen(filename, "a");
    if (f == NULL) {
        return -1; 
    }

    fputs(text_content, f); 
    fclose(f);

    return 1; 
    
}
