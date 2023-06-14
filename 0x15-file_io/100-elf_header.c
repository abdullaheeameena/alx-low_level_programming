#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr.
 * @message: The error message to display.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
}

/**
 * open_file - Opens the specified file and returns the file descriptor.
 * @filename: The name of the file to open.
 * Return: The file descriptor of the opened file.
 */
int open_file(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		print_error("Failed to open file");
		exit(98);
	}
	return (fd);
}

/**
 * read_elf_header - Reads the ELF header from the specified file descriptor.
 * @fd: The file descriptor of the ELF file.
 * @header: Pointer to the Elf64_Ehdr structure to store the header.
 */
void read_elf_header(int fd, Elf64_Ehdr *header)
{
	ssize_t bytes_read = read(fd, header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		print_error("Failed to read file");
		exit(98);
	}
}
/**
 * display_elf_header - Displays the information contained in the ELF header.
 * @header: Pointer to the Elf64_Ehdr structure containing the header inform.
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	printf("Magic:   %c %c %c %c\n",
			header->e_ident[EI_MAG0], header->e_ident[EI_MAG1],
			header->e_ident[EI_MAG2], header->e_ident[EI_MAG3]);
	printf("Class:                          ");
	switch (header->e_ident[EI_CLASS])
{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
			break;
}
	printf("Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
printf("Version:     %d (current)\n", header->e_ident[EI_VERSION]);
}
/**
 * print_osabi - Prints the OS/ABI of an ELF header
 * @header: Pointer to the Elf64_Ehdr structure containing the header inform.
 */
void print_osabi(const Elf64_Ehdr *header)
{
	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("Tru64\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
}
/**
 * print_Abi_Version - Prints the ABI Version of an ELF header
 * @header: Pointer to the Elf64_Ehdr structure containing the header inform.
 */
void print_Abi_Version(const Elf64_Ehdr *header)
{
	printf("ABI Version:        %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("Relocatable\n");
			break;
		case ET_EXEC:
			printf("Executable\n");
			break;
		case ET_DYN:
			printf("Shared object\n");
			break;
		case ET_CORE:
			printf("Core\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Display the information.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		exit(98);
	}
	filename = argv[1];
	fd = open_file(filename);

	read_elf_header(fd, &header);

	display_elf_header(&header);
	close(fd);
	return (0);
}

