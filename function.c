#include <stdio.h>

int add(int x, int y);

int main() {
    int a;
    int b;
    int sum;

    scanf("%d%d", &a, &b);

    sum = add(a, b);
    printf("Sum: %d\n", sum);
    return 0;
}

int add(int a, int b) {
    return a + b;
}