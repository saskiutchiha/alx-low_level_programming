#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content) {
    int fd ;
   ssize_t text_length ;
   ssize_t bytes_written ;
    if (filename == NULL) {
        return -1;
    }

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        return -1; 
    }

    if (text_content != NULL) {
        text_length = strlen(text_content);
         bytes_written = write(fd, text_content, text_length);
        if (bytes_written != text_length) {
            close(fd);
            return -1; 
        }
    }

    close(fd);

    return 1; 
}
