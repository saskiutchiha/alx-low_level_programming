#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
/**
 *  read_textfile - Entry point
 *@letters : variable to pass to  read_textfile function
 *@filename : variable to pass to  read_textfile function
 * Return: ssize_t (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters) {
FILE *file = fopen(filename, "r");
char *buffer;
ssize_t bytesWritten;
ssize_t bytesRead;
if (filename == NULL)
{
return (0); 
}
if (file == NULL) 
{
return (0); 
}
buffer = malloc(letters + 1);
if (buffer == NULL)
{
fclose(file);
return (0); 
}
bytesRead = fread(buffer, 1, letters, file); 
fclose(file);
if (bytesRead <= 0)
{
free(buffer);
return 0; 
}
buffer[bytesRead] = '\0'; 
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead); 
free(buffer);
if (bytesWritten != bytesRead)
{
return 0; 
}
return bytesWritten; 
}
