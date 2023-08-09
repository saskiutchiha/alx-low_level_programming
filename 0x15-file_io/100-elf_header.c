#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header(const Elf64_Ehdr *header) {
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("Version: %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", header->e_type);
    printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Unable to open file");
    }

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        close(fd);
        print_error("Error reading ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        close(fd);
        print_error("Not an ELF file");
    }

    display_elf_header(&header);
    close(fd);

    return 0;
}
