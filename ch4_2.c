#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    int fd; 
    fd = open("text.txt", O_CREAT | O_EXCL, 0644);
    if(fd == -1){
        perror("Excl");
        exit(1);
    }
    printf("Sucess file create\n");
    close(fd);
}