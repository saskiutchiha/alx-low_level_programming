#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
FILE *f;
struct stat st;
f = fopen(filename ,"W");
if (filename == NULL)
{
return 0;
}
    fclose(f);
fwrite(text_content,1,strlen(text_content), f);

    if (stat(filename, &st) == 0 && (st.st_mode & S_IRUSR) == 0) {
        chmod(filename, S_IRUSR | S_IWUSR);
    }

return 1;
}
