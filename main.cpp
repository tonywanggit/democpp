#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp = fopen("/abcdefgg", "r");
    if(fp == NULL)
    {
        printf("errno: %d\n", errno);
        perror("open file /abc");
        fprintf(stderr, "%s, line:%d: %s\n", __FILE__, __LINE__, strerror(errno));
        exit(1);
    }

    return 0;
}

