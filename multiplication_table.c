#include <stdio.h>

int main (void) {
    int i;
    int mul;
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        mul = num * i;
        printf("%d x %d = %d\n", num, i, mul);
    }

    return 0;
}