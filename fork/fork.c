#include <stdio.h>
#include <unistd.h>

int main() {

    int pid;

    pid = fork();

    if (pid == 0) {
        printf("Sono il figlio");
    }
    else if (pid > 0)
        printf("Sono il padre");

}