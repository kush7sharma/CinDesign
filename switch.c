#include <stdio.h>

int balance;

int main(void) {
    int choice;
    int amount;
    int exit_loop = 0;

    while(1) {
        printf("Press 1 for withdrawal\n");
        printf("Press 2 for balance\n");
        printf("Press 3 for Deposit\n");
        printf("Press 4 for exit\n");

        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the amount to withdraw\n");
                scanf("%d", &amount);
                if(amount > balance) {
                    printf("Insufficient balance\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful\n");
                }
                break;
            case 2:
                printf("Your balance is %d\n", balance);
                break;
            case 3:
                printf("Enter the amount to deposit\n");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposit successful\n");
                break;
            case 4:
                exit_loop = 1;
                break;
            default:
                printf("Invalid choice\n");  
        }

        if(exit_loop) {
            break;
        }   

    }

    return 0;

}