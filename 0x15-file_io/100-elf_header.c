#include <elf.h>
#include "holberton.h"

void magic(unsigned char *);
void class(unsigned char *);
void data(unsigned char *);
void version(unsigned char *);
void abi(unsigned char *);
void abiV(unsigned char *);
void type(unsigned char *);
void entry(unsigned char *);

/**
 * magic - .
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
 * class - .
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
	}
}
/**
 * data - .
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
	}
}
/**
 * version - .
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
 * abi - .
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
	}
}
/**
 * abiV - .
 * @e: pointer to first element array in elf-header
 */
void abiV(unsigned char *e)
{
	printf("  ABI Version:                       %d\n", e[EI_ABIVERSION]);
}
/**
 * type - .
 * @e: pointer to first element array in elf-header
 */
void type(unsigned char __attribute__((__unused__)) *e)
{

}
/**
 * entry - .
 * @e: pointer to first element array in elf-header
 */
void entry(unsigned char __attribute__((__unused__)) *e)
{

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
	type(header->e_ident);
	entry(header->e_ident);

	free(header);
	close(opening);

	return (0);
}
