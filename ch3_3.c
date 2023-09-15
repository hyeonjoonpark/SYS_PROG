#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char **argv) {
    struct stat statbuf;
    int kind;

    stat("linux.txt", &statbuf);
    printf("Mode = %o\n", (unsigned int)statbuf.st_mode);

    return 0;
}