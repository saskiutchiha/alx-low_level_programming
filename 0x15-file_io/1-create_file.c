#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, char *text_content)
{
FILE *f;
f = fopen(filename ,"W");
if (filename == NULL)
{
return 0;
}
fwrite(text_content,1,strlen(text_content), f);
fclose(f);
return 1;
}
