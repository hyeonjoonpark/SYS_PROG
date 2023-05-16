#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    if(mkdir("han", 0755) == -1) {
        perror("에러 : ");
        exit(-1);
    }
    printf("han 디렉토리가 성공적으로 만들어짐");
}