#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {


    clock_t begin = clock();


    unsigned long int amount;

    scanf("%d", &amount);

    amount = amount * 2;

    char **results = malloc(sizeof(char*)*amount);

    unsigned long int count = 0;
    unsigned long int found = 0;
    unsigned long int rAmount = amount;

    while(rAmount--) {

        char * result = malloc(sizeof(char*)*16);

        scanf("%s", result);
        
        //printf("%s", result);


        results[count] = malloc(sizeof(char*)*16);

        if(count == 0 || count == amount-1) {
            strcpy(results[count], result);
        }
        else {


            if(strlen(results[count-1]) < strlen(result)) {
                
                strcpy(results[count], result);


                
        
            } else if (strlen(results[count-1]) > strlen(result)){
                
                char *tmp = strdup(results[count - 1]);
                //strcpy(tmp, results[count - 1]);
                
                strcpy(results[count - 1], result);
                strcpy(results[count], tmp);


                free(tmp);

                

            } else {

                strcpy(results[count], result);

            }


        }

        free(result);

        //printf("%s\n", results[count]);

        count++;

    }
    



    for(int i = 0; i < count; i++){
        printf("%d: %s\n", i, results[i]);
        if(strcmp(results[i], "") == 0)found++;
        free(results[i]);
    }

    free(results);

    printf("%ld", (amount / 2) - found);



    clock_t end = clock();

    
    double time_spent = ((double)end - (double)begin) / CLOCKS_PER_SEC;


    //printf("----- TIME TAKEN -----\n%f SECONDS", time_spent);

    




}
