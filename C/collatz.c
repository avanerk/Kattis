#include <stdio.h>
#include <time.h>


void printCollatz(long num) {

    
    long lnum = num;
    int counter = 0;

    while(lnum != 1) {


        if (lnum % 2 == 0) {
            lnum /= 2;

        } else {

            lnum = 3*lnum+1;


        }

        counter++;

    }

    printf("%d takes %d steps\n", num, counter);


}


int main() {


    clock_t begin = clock();


    long i = 1000000;
        
    while(--i)
       printCollatz(i);

    clock_t end = clock();

    double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;


    printf("----- TIME TAKEN-----\n%f SECONDS\n", time_spent);

    //printf("Steps needed: %d\n", counter);


    return 0;



}
