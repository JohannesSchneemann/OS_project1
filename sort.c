
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct state_names {
    char abbr[10];
};

int main() {
    int counter = 0;
    struct state_names info[10];
    struct state_names temp;
    char *line = NULL;
    size_t len = 0;
    
    printf("Enter a U.S. state (max. 10). \n");
    printf("To stop, please press 'Ctrl+D': \n");
    for(int i = 0; i<20; i++) {
        if (getline(&line, &len, stdin) != -1) {
            sscanf(line,"%s",info[i].abbr);
            counter++;
        }
        else {
            break;
        }
    }
    for (int i = 0; i<counter; i++) {
        for(int j = i; j<counter; j++) {
            if (strcmp(info[i].abbr, info[j].abbr) > 0) {
                strcpy(temp.abbr , info[i].abbr);
                strcpy(info[i].abbr, info[j].abbr);
                strcpy(info[j].abbr, temp.abbr);
            }
        }
    }
    printf("\n");
    printf("The entered states in alphabetical order are: \n");
    for (int i = 0; i<counter; i++) {
        printf("%s\n", info[i].abbr);
    }
    return 0;
}
