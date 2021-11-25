#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments passed to the program
 * @av: array of arguments
 *
 * Return: 0 success
 */
int main(int ac, char **av)
{
int file_from, file_to, new_file;
char buffer[1024];
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(av[1], O_RDONLY);
if (file_from < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((new_file = read(file_from, buffer, 1024)) > 0)
{
if (file_to < 0 || write(file_to, buffer, new_file) != new_file)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
close(file_from);
exit(99);
}
}
if (new_file < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
if (close(file_from) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
if (close(file_to) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}
