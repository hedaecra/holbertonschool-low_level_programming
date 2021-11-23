#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name file
 * @letters: number of letters it should read and print
 *
 * Return: letter success or 0 error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, fread, fwrite;
char *cant;
if (!filename)
return (0);

file = open(filename, O_RDONLY);
if (file < 0)
return (0);

cant = malloc(sizeof(char) * letters);
if (!cant)
return (0);

fread = read(file, cant, letters);
if (fread < 0)
{
free(cant);
return (0);
}
cant[fread] = '\0';

fwrite = write(STDOUT_FILENO, cant, fread);
free(cant);
if (fwrite < 0)
{
return (0);
}

close(file);
return (fwrite);

}
