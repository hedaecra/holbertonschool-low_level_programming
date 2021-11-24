#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 success -1 error
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, fwrite, i = 0;
if (filename == NULL)
return (-1);

file = open(filename, O_WRONLY | O_APPEND);
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
