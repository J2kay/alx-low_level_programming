#include "main.h"
/**
 * read_textfile - reads a text file and prints it to std-output
 * @filename: pointer to file
 * @letters: number of letters to be read and printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fl;
    char buffer[1024];
    ssize_t tally, check;

    if (filename == NULL)
        return (0);
    fl = open(filename, O_RDONLY);
    if (fl == -1)
        return (0);
    tally = read(fl, buffer, letters);
    if (tally == -1)
    {
        close(fl);
        return (0);
    }
    check = write(STDOUT_FILENO, buffer, tally);
    if (check != tally || check == -1)
        return (0);
    close(fl);

    return (tally);
}