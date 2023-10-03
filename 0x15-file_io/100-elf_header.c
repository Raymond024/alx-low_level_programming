#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
void check_elf(unsigned char *i_identify);
void print_num(unsigned char *i_identify);
void print_class(unsigned char *i_identify);
void print_content(unsigned char *i_identify);
void print_vers(unsigned char *i_identify);
void print_osabi(unsigned char *i_identify);
void print_abi(unsigned char *i_identify);
void print_type(unsigned int i_type, unsigned char *i_identify);
void print_ent(unsigned long int i_ent, unsigned char *i_identify);
void close_elf(int fd);

/**
 * check_elf - Checks for elf file
 * @i_identify: ponter to elf numbers
 * Description: exit code if not elf - 98.
 */
void check_elf(unsigned char *i_identify)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (i_identify[ind] != 127 &&
		    i_identify[ind] != 'E' &&
		    i_identify[ind] != 'L' &&
		    i_identify[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_num - Prints the numbers of elf
 * @i_identify: pointer to an array of elf numbers
 * Description: numbers in elf file
 */
void print_num(unsigned char *i_identify)
{
	int ind;

	printf(" Magic: ");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", i_identify[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints elf header class
 * @i_identify: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *i_identify)
{
	printf(" Class: ");

	switch (i_identify[EI_CLASS])
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
		printf("<unknown: %x>\n", i_identify[EI_CLASS]);
	}
}

/**
 * print_content - Prints the content of elf file
 * @i_identify: A pointer to an array containing the ELF class.
 */
void print_content(unsigned char *i_identify)
{
	printf(" Data: ");

	switch (i_identify[EI_DATA])
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
		printf("<unknown: %x>\n", i_identify[EI_CLASS]);
	}
}

/**
 *  * print_vers - Prints the version of an elf header
 *   * @i_identify: A pointer to an array containing the ELF version.
 *    */
void print_vers(unsigned char *i_identify)
{
	 printf(" Version: %d",
			  i_identify[EI_VERSION]);

	switch (i_identify[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @i_identify:  pointer to an array containing the ELF
 */
void print_osabi(unsigned char *i_identify)
{
	printf(" OS/ABI: ");

	switch (i_identify[EI_OSABI])
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
		printf("<unknown: %x>\n", i_identify[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an elf
 * @e_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *i_identify)
{
	printf(" ABI Version: %d\n",
		i_identify[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @i_type: elf type 
 * @i_ident: pointer to an array containing the elf class.
 */
void print_type(unsigned int i_type, unsigned char *i_identify)
{
	if (i_identify[EI_DATA] == ELFDATA2MSB)
		i_type >>= 8;

	printf(" Type: ");

	switch (i_type)
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
		printf("<unknown: %x>\n", i_type);
	}
}

/**
 * print_ent - Prints the entry point of an ELF file
 * @i_ent: pointer to elf file entry
 * @i_identify: pointer to an array containing the ELF class
 */
void print_ent(unsigned long int i_ent, unsigned char *i_identify)
{
	printf(" Entry point address: ");

	if (i_identify[EI_DATA] == ELFDATA2MSB)
	{
		i_ent = ((i_ent << 8) & 0xFF00FF00) |
			  ((i_ent >> 8) & 0xFF00FF);
		i_ent = (i_ent << 16) | (i_ent >> 16);
	}

	if (i_identify[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)i_ent);

	else
		printf("%#lx\n", i_ent);
}

/**
 * close_elf - Closes elf file
 * @fd: elf file descriptor
 * Description: exit code 98 if file cannot be closed
 */
void close_elf(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - displays content of elf file header
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: if success 0
 * Description: exit code 98 if file is not an elf file
 * o if function fails
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int x, y;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(x);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	y = read(x, header, sizeof(Elf64_Ehdr));
	if (y == -1)
	{
		free(header);
		close_elf(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_num(header->e_ident);
	print_class(header->e_ident);
	print_content(header->e_ident);
	print_vers(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_ent(header->e_entry, header->e_ident);

	free(header);
	close_elf(x);
	return (0);
}
