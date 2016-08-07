#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 33000

typedef struct pair {

    int a;
    int b;

} pair;


int bs[ARRAY_SIZE];

int primeLn = 0;

int * sieve() {

    int * primes = (int *)malloc(sizeof(int)*ARRAY_SIZE); 



    int i, j;

    for(i = 0;i < ARRAY_SIZE; i++)
        bs[i] = 1;


    bs[0] = 0;
    bs[1] = 0;

    for (i = 2; i <= ARRAY_SIZE; i++) {


        if(bs[i]) {

            for(long j = 1L * i * i; j <= ARRAY_SIZE; j+=i)
                bs[j] = 0;
            
            primes[primeLn] = i;
            primeLn++;

        }


    }

    return primes;


}



int find(int value, int * primes) {

    for ( int i = 0; i < primeLn; i++) {

        if(value == primes[i]) return 1;

    }


    return 0;


}

int main()
{

    clock_t begin = clock();

    int * primes = sieve();

    int tc;
    int flag = 1;

    scanf("%d", &tc);

    while(tc--) {

        int n;

        scanf("%d", &n);

        pair ** ans = malloc(sizeof(pair *) * 1000);

        int found = 0;

        int a;

        for(int i = 0; i < primeLn; i++) {
            a = primes[i];

            if(a > (n-a))
                break;

            if (find((n - a), primes)) {

                ans[found] = malloc(sizeof(pair));
                ans[found]->a = a;
                ans[found]->b = n - a;
                found++;

            }

        }

        if(flag)
            printf("\n");
        flag = 1;

        printf("%d has %d representation(s)\n", n, found);
        for(int i = 0; i < found; i++) {
            printf("%d+%d\n", ans[i]->a, ans[i]->b); 
            free(ans[i]);
        }

        free(ans);


    }

    clock_t end = clock();
 
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("----- TIME TAKEN -----\n%f SECONDS\n", time_spent);

    return 0;
}
