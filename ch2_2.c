#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    if(rmdir("han") == -1) {
        perror("에러 : ");
        exit(-1);
    }
    printf("han 디렉토리가 성공적으로 제거 됨");
}