#include <stdio.h>

int main() {

    int amount, sum, m;
    unsigned long long n;

    int res = scanf("%d", &amount);

    while(amount--){

        sum = 0;

        scanf("%d", &m);

        for(int x = 0; x < m; x++) {

            scanf("%llu", &n);

            sum += n%m;

        }
    
        if(sum % m == 0)
            puts("YES");
        else
            puts("NO");

    }


    return 0;

}
