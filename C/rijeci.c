#include <stdio.h>

int main() {

    int a = 1, b=0, c, x;

    scanf("%d", &x);

    while(x--) {
        c =  b;
        b += a;
        a = c;
    }

    printf("%d %d", a, b);

    return 0;


}
