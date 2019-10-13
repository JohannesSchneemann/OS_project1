#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char *argv[]) {
    int pid;
    int status;
    
    char *my_args[5];
    my_args[0] = "./pre2";
    my_args[1] = "|./sort2";
    my_args[3] = NULL;
    
    pid = fork();
    
    if(pid == 0) {
        execv ("./pre2", my_args);
        execv ("|./sort2", my_args);
    }
    else if(pid == -1) {
        printf("system call to fork failed");
    }
    else {
        wait(&status);
        printf("Process is complete.\n");
        exit(0);
    }
    return 0;
}

