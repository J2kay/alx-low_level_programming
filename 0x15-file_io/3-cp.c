#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main: entry point of program
 * Return: 0 always on success
 */
int main(int argc, char *argv[])
{
	int fd, fd1, tally = 0, check = 0, c_check = 0, c_check2 = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}       
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[1]);
		exit(98); 
	}
	fd1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		c_check = close(fd);
		exit(99);
	}
	while ((tally = read(fd, buf, 1024)) > 0)
	{
		check = write(fd1, buf, tally);
		if (check == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			c_check = close(fd);
			c_check2 = close(fd1);
			exit(99);
		}
	}
        
	if (tally == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[1]);
		c_check = close(fd);
		c_check2 = close(fd1);
		exit(98);
	}
	if (c_check == -1)
	{
		dprintf(2, "Error: Can't write to %d\n", fd);
		exit(100);
	}
	if (c_check2 == -1)
	{
		dprintf(2, "Error: Can't write to %d\n", fd1);
		exit(100);
	}
	return (0);
}
