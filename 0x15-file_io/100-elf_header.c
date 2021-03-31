#include <elf.h>
#include "holberton.h"

void magic(unsigned char *);
void class(unsigned char *);
void data(unsigned char *);
void version(unsigned char *);
void abi(unsigned char *);
void abiV(unsigned char *);
void type(short, unsigned char *);
void entry(unsigned long int, unsigned char *);

/**
 * magic - Prints the magic numbers of ELF file
 * @e: pointer to first element array in elf-header
 */
void magic(unsigned char *e)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%.2x ", e[i]);
	printf("\n");
}
/**
 * class - Prints the class(32/64) of ELF file
 * @e: pointer to first element array in elf-header
 */
void class(unsigned char *e)
{
	printf("  Class:                             ");

	switch (e[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e[EI_CLASS]);

	}
}
/**
 * data - Prints the architecture (little/Big endian) of the data in ELF file
 * @e: pointer to first element array in elf-header
 */
void data(unsigned char *e)
{
	printf("  Data:                              ");

	switch (e[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e[EI_DATA]);

	}
}
/**
 * version - Prints the version of ELF file
 * @e: pointer to first element array in elf-header
 */
void version(unsigned char *e)
{
	printf("  Version:                           ");

	switch (e[EI_VERSION])
	{
		case EV_CURRENT:
			printf("%i (current)\n", e[EI_VERSION]);
			break;
		default:
			printf("%i\n", e[EI_VERSION]);
			break;
	}
}
/**
 * abi - Prints operating system and Application Binary Interface of ELF file
 * @e: pointer to first element array in elf-header
 */
void abi(unsigned char *e)
{

	printf("  OS/ABI:                            ");

	switch (e[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e[EI_OSABI]);

	}
}
/**
 * abiV - Prints ABI version of ELF file
 * @e: pointer to first element array in elf-header
 */
void abiV(unsigned char *e)
{
	printf("  ABI Version:                       %d\n", e[EI_ABIVERSION]);
}
/**
 * type -  Prints type of ELF file
 * @e_tp: type of ELF file
 * @e: pointer to first element array in elf-header
 */
void type(short e_tp, unsigned char *e)
{
	if (e[EI_DATA] == ELFDATA2MSB)
		e_tp >>= 8;

	printf("  Type:                              ");

	switch (e_tp)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_tp);
	}
}

/**
 * entry - Prints entry point addres of the ELF file process
 * @e_ent: hex address if the ELF file process
 * @e: pointer to first element array in elf-header
 */
void entry(unsigned long int e_ent, unsigned char *e)
{
	printf("  Entry point address:               ");

	if (e[EI_DATA] == ELFDATA2MSB)
		e_ent = (((e_ent >> 24) & 0x000000ff) |
			((e_ent >> 8) & 0x0000ff00) |
			((e_ent << 8) & 0x00ff0000) |
			((e_ent << 24) & 0xff000000));
	printf("%#lx\n", e_ent);
}

/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: number of arguments of the program
 * @argv: arguments of the program
 * Return: Always 0
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	ssize_t opening, reading;

	header = malloc(sizeof(Elf64_Ehdr));

	if (!header || argc != 2)
	{
		dprintf(STDERR_FILENO, "An error occurred reading the file\n");
		exit(98);
	}

	opening = open(argv[1], O_RDONLY);
	reading = read(opening, header, sizeof(Elf64_Ehdr));

	if (reading == -1 || header->e_ident[1] != 'E'
		|| header->e_ident[2] != 'L' || header->e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "An error occurred reading the file\n");
		exit(98);
	}

	printf("ELF Header:\n");
	magic(header->e_ident);
	class(header->e_ident);
	data(header->e_ident);
	version(header->e_ident);
	abi(header->e_ident);
	abiV(header->e_ident);
	type(header->e_type, header->e_ident);
	entry(header->e_entry, header->e_ident);

	free(header);

	if (close(opening) == -1)
	{
		dprintf(STDERR_FILENO, "An error occurred reading the file\n");
		exit(98);
	}
	return (0);
}
