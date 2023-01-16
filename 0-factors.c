#include<stdio.h>
#include "unistd.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int fd;
    if (argc == 2)
    {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            return (0);
        }
        
    }
    return 0;
}