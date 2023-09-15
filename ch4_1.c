#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int fd;
    fd = open("test.txt", O_CREAT, 0644);

    if(fd == -1) {
        perror("Create");
        exit(1);
    }

    printf("fd : %d\n", (int)fd);
    close(fd);
}