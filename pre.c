#include<stdlib.h>
#include<stdio.h>

struct state {
    char name[10];
    double pop;
};

int main() {
    struct state info[10];
    char *line = NULL;
    size_t len = 0;
    int count = 0;
    double pop_output = 10;
    
    printf("Enter a U.S. state with its population (max. 10). \n");
    printf("To stop, please press 'Ctrl+D': \n");
    for(int i = 0; i<10; i++) {
        if (getline(&line, &len, stdin) != -1) {
            sscanf(line,"%s %lf",info[i].name, &info[i].pop);
            count++;
        }
        else {
            break;
        }
    }
    printf("The entered states with a population over 10 million are: \n");
    for (int i = 0; i<count; i++)
        if(info[i].pop >= pop_output) {
            printf("%s\n", info[i].name);
        }
    return 0;
}
