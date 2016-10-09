#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define TWO_SPACES printf("  ");

int main() {

    char * line = malloc(sizeof(char)*1500);

    int result = scanf("%s", line);

    int indent = 0;

    for(int i = 0; i < strlen(line); i++)
    {

        if(line[i-1] == '{' || line[i-1] == ',' || (line[i-1] != ',' && line[i] == '}')) {
            for(int x = 0; x < indent; x++)
                TWO_SPACES
        }

        printf("%c",line[i]);

        if(line[i] == '{') {
            indent++;
            printf("\n");
        }

        if (line[i+1] == '}')
            indent--;


        if(line[i] == ',' || (line[i+1] == '}' && line[i] != '{'))
            printf("\n");

    }

    free(line);


    printf("\n");

    return 0;

}
