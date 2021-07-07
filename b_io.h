/**************************************************************
* Project: Assignment 5 – Buffered I/O Write
*
* File: b_io.h
*
* Description: This is a header file
**************************************************************/

#ifndef _B_IO_H
#define _B_IO_H
#include <fcntl.h>

typedef int b_io_fd;

b_io_fd b_open (char * filename, int flags);
int b_read (b_io_fd fd, char * buffer, int count);
int b_write (b_io_fd fd, char * buffer, int count);
void b_close (b_io_fd fd);

#endif

