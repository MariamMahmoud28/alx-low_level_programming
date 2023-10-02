#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <errno.h>

void print_error(const char *msg) {
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header) {
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++) {
	printf("%02x ", header->e_ident[i]);
	}
    printf("\nClass: %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type: ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        default:
            printf("Unknown\n");
    }
    printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error(strerror(errno));
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error("Failed to read ELF header");
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        print_error("Not an ELF file");
    }

    print_elf_header_info(&header);
    close(fd);

    return 0;
}

