#include <stdio.h>

int add(int a, int b) {
    int c = a + b;
    return c;
}

int main () {

    int a;
    int b;
    int sum;

    scanf("%d%d", &a, &b);

    sum = add(a, b);

    printf("Sum: %d\n", sum);

    return 0;
}