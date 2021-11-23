#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: -1 filename is null
 */
int create_file(const char *filename, char *text_content)
{
int file, fwrite, i = 0;
if (filename == NULL)
return (-1);

file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file < 0)
return (-1);

if (text_content)
{
while (text_content[i])
i++;

fwrite = write(file, text_content, i);
if (i != fwrite)
return (-1);
}
close(file);
return (1);
}
