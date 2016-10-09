#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t begin = clock();

    int amount;

    scanf("%d", &amount);

    amount = amount * 2;

    char **results = malloc(sizeof(char*)*amount);

    int count = 0;
    int found = 0;

    while(amount--) {

        char result[15];

        scanf("%s", result);
        
        //printf("%s", result);


        results[count] = malloc(sizeof(char*)*15);
        strcpy(results[count], result);

        int lowIndex = 0;
        int highIndex = amount;

        int timesThrough = 0;

        while (lowIndex <= highIndex) {

            int middleIndex = (highIndex + lowIndex) / 2;

            if (strcmp(results[middleIndex], result) < 0)
                lowIndex = middleIndex - 1;
            else if(strcmp(results[middleIndex], result) > 0)
                highIndex = middleIndex - 1;
            else {

                lowIndex = highIndex + 1;

            }


        }
            if(strcmp(results[count-1], result) == 0) {
                
                strcpy(results[count], result);


                
        
            } else {
                
                char tmp[15];
                strcpy(tmp, results[count + 1]);
                strcpy(results[count + 1], result);
                strcpy(results[count], tmp);


            }


            for(int i = 0; i < count; i++) {

            
                if(i > (amount/2)) break;

                char * cWord = results[i];

                if(strcmp(cWord, result) == 0) {

                    found++;

                }

            }


        


        //printf("%s\n", results[count]);

        count++;

    }




    printf("%d", found);

    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("----- TIME TAKEN -----\n%f SECONDS\n", time_spent);


}
