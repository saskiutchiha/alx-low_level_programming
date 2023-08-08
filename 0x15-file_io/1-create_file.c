#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#nclude <striing.h>

int create_file(const char *filename, char *text_content)
{
FILE *f;
f = fopen(filename ,'w');
if (filename == NULL)
{
return 0;
}
fwrite(text_content,1,strlen(text_content), f);
fclose(f);
return 1;
}
