#include "main.h"


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	print_elf_header(argv[1]);

	return (0);
}

/**
 * print_error - Prints an error message and exits the program.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - Prints the ELF header of a given file.
 * @filename: The name of the file.
 */
void print_elf_header(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	char *osabi_name, *type_name;
	Elf64_Ehdr header;
	int i;

	if (fd == -1)
	{
		print_error("Error opening file");
	}
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		print_error("Error reading ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n", header.e_ident[EI_CLASS]
		== ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header.e_ident[EI_DATA] ==
	ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
		header.e_ident[EI_VERSION]);
	osabi_name = header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
		header.e_ident[EI_OSABI] == ELFOSABI_SOLARIS ? "UNIX - Solaris" : "Unknown";
	printf("  OS/ABI:                            %s\n", osabi_name);
	printf("  ABI Version:                       %d\n",
		header.e_ident[EI_ABIVERSION]);
	type_name = header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown";
	printf("  Type:                              %s\n", type_name);
	printf("  Entry point address:               0x%lx\n", header.e_entry);
	close(fd);
}
