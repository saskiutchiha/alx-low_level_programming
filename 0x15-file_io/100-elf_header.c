#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

/**
 * print_error - Print error message and exit with status code 98
 * @message: The error message to be printed
 */
void print_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * display_elf_header - Display information from ELF header
 * @header: Pointer to the ELF header structure
 */
void display_elf_header(const Elf64_Ehdr *header)
{
    int i;

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x ", header->e_ident[i]);
    printf("\nClass: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("Version: %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: %d\n", header->e_type);
    printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int fd;
    ssize_t bytes_read;
    Elf64_Ehdr header;
    const char *filename;

    if (argc != 2)
        print_error("Usage: elf_header elf_filename");

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        print_error("Unable to open file");

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
    {
        close(fd);
        print_error("Error reading ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
    {
        close(fd);
        print_error("Not an ELF file");
    }

    display_elf_header(&header);
    close(fd);

    return 0;
}
