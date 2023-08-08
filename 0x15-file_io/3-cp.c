#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_usage() {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

void print_error(const char *message, const char *filename) {
    dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_usage();
        return 97;
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        print_error("Can't read from file", file_from);
        return 98;
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
    if (fd_to == -1) {
        print_error("Can't write to", file_to);
        return 99;
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0) {
        ssize_t bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1) {
            print_error("Can't write to", file_to);
            close(fd_from);
            close(fd_to);
            return 99;
        }
    }

    if (bytes_read == -1) {
        print_error("Can't read from file", file_from);
        close(fd_from);
        close(fd_to);
        return 98;
    }

    if (close(fd_from) == -1 || close(fd_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd\n");
        return 100;
    }

    return 0;
}
