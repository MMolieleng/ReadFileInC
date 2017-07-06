#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	usage()
{
				write(0, "./exec filename\n", 16);
}

void	read_file(char *filename)
{
				int		fd; // File descriptor
				char	buff[256]; //buffer size

				fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
				if (fd == -1)
				{
								write(1, "File not found\n", 15);
				}
				else
				{
								close(fd);
				}
}

int	main(int argc, char **argv)
{
				if (argc != 2)
				{
								usage();
								return (-1);
				}
				read_file(argv[1]);
				return (0);
}
