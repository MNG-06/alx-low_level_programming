#include "main.h"

/**
 * read_textfile - Reads a file and prints it to the POSIX stdout.
 * @filename: The name of the file that needs to be read.
 * @letters: Is the number of letters the function should print.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters) 
 { 
         int fd; 
         ssize_t nrd, nwr; 
         char *buf; 
  
         if (!filename) 
                 return (0); 
  
         fd = open(filename, O_RDONLY); 
  
         if (fd == -1) 
                 return (0); 
  
         buf = malloc(sizeof(char) * (letters)); 
         if (!buf) 
                 return (0); 
  
         nrd = read(fd, buf, letters); 
         nwr = write(STDOUT_FILENO, buf, nrd); 
  
         close(fd); 
  
         free(buf); 
  
         return (nwr); 
 }
