#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void	read_file(char *filename)
{

}

int	main(int argc, char **argv)
{
				if (argc != 2)
								return (-1);
				read_file(argv[1]);
				return (0);
}
