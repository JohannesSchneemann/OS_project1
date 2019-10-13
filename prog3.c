#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int pid;
    int num = 0;
    int status;
    
    printf("You entered %d commands: \n", argc);
    
    for (num = 0; num < argc; ++num) {
        printf("\t%s\n", argv[num]);
    }
    
    pid = fork();
    
    if(pid == 0) {
        printf("Child's PID is %d. Parent's PID is %d. \n", (int)getpid(), (int)getppid());
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
