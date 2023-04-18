#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @texts_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *texts_content)
{
int fd, w, len = 0;
if (filename == NULL)
return (-1);
if (texts_content != NULL)
{
for (len = 0; texts_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, texts_content, len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}
