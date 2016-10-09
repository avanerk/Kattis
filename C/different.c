#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    unsigned long long int first_number;
    unsigned long long int second_number;


    while(scanf("%llu %llu", &first_number, &second_number) == 2) {

    
        if (first_number > second_number)
            printf("%llu", first_number - second_number);
        else
            printf("%llu", second_number - first_number);

        printf("\n");

    }



    return 0;


}
