#include <stdio.h>

int main(void) {

    for(int i = 1; i <= 10; i++) {
        if(i == 5) {
            goto end;
        }
        printf("%d\n", i);
    }

end:
    printf("End of the program\n");

    return 0;
}